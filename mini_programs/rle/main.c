#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    char *data;
    int size;
    int capacity;
} Buffer;

void initilizeBuffer(Buffer *b);

void saveEncryptionFileContent(FILE *f, Buffer *buffer);

void saveCharacterToBufferData(Buffer *buffer, char ch);

void processBuffer(Buffer *inputBuffer, Buffer *processedBuffer);

void putProcessBufferIntoOutPutFile(Buffer *processedBuffer, FILE *output);

int main(int args, char *argv[])
{

    if (args < 2)
    {
        printf("you need to provide the source and destination\n");
        printf("eg ./rle enc.txt enc_output.txt");
        return 1;
    }

    FILE *encryptionFile = fopen(argv[1], "r");

    Buffer encryptionContentBuffer;

    Buffer outputBuffer;

    initilizeBuffer(&encryptionContentBuffer);

    initilizeBuffer(&outputBuffer);

    saveEncryptionFileContent(encryptionFile, &encryptionContentBuffer);

    // save that buffer data to the new buffer

    processBuffer(&encryptionContentBuffer, &outputBuffer);

    FILE *encryptionOutputFile = fopen(argv[2], "w");

    // save to the decryption file

    putProcessBufferIntoOutPutFile(&outputBuffer, encryptionOutputFile);

    free(encryptionContentBuffer.data);

    free(outputBuffer.data);

    fclose(encryptionOutputFile);
    fclose(encryptionFile);

    return 0;
}

void initilizeBuffer(Buffer *b)
{
    b->size = 0;
    b->capacity = 2;
    b->data = malloc(b->capacity * sizeof(char));
    if (b->data == NULL)
    {
        printf("failed to initilze the data of buffer\n");
    }
}

void saveEncryptionFileContent(FILE *f, Buffer *buffer)
{
    char ch;
    while ((ch = fgetc(f)) != EOF)
    {
        saveCharacterToBufferData(buffer, ch);
    }
}

void saveCharacterToBufferData(Buffer *buffer, char ch)
{
    if (buffer->size == buffer->capacity)
    {
        int newCapacity = buffer->capacity * 2;
        char *tempAllocation = realloc(buffer->data, newCapacity * sizeof(char));
        if (tempAllocation == NULL)
        {
            printf("failed to allocate the temp allocation");
        }
        buffer->data = tempAllocation;
        buffer->capacity = newCapacity;
    }
    buffer->data[buffer->size] = ch;
    buffer->size++;
}

void processBuffer(Buffer *inputBuffer, Buffer *processedBuffer){

    if(inputBuffer->size == 0) return ;

    char currentchar = inputBuffer->data[0];

    int counter = 1;

    for(int i = 1;i<inputBuffer->size;i++){
        if(currentchar == inputBuffer->data[i]){
            counter++;
            currentchar = inputBuffer->data[i];
            continue;
        }else{
            if(counter >1){
                char temp[20];
                int c = sprintf(temp,"%d",counter);
                for(int j=0;j<c;j++){
                saveCharacterToBufferData(processedBuffer,temp[j]);
                }
                saveCharacterToBufferData(processedBuffer,currentchar);
                counter = 1;
                currentchar = inputBuffer->data[i];
                continue;
            }else{
                saveCharacterToBufferData(processedBuffer,currentchar);
                currentchar = inputBuffer->data[i];

            }
        }
    }
    
    
    saveCharacterToBufferData(processedBuffer,currentchar);


}

void putProcessBufferIntoOutPutFile(Buffer *processedBuffer, FILE *output)
{

    int counter = 0;
    while (counter < processedBuffer->size)
    {
        fputc(processedBuffer->data[counter], output);
        printf("%c", processedBuffer->data[counter]);
        counter++;
    }
    printf("the output is completed");
}
