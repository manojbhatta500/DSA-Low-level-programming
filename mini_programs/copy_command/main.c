#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char *data;
    int size;
    int capacity;
}Buffer;
void initilizeBuffer(Buffer *d){
    d->size = 0;
    d->capacity = 2;
    d->data = malloc(d->capacity * sizeof(char));
}
void copyDataToBuffer(Buffer *b,char ch ){
    if(b->size == b->capacity){
        size_t newCapacity = 2 * b->capacity;
        char *tempBuffer = realloc(b->data,newCapacity);
        if(tempBuffer == NULL){
            printf("reallocation of tempBuffer faile");
            return;
        }
        b->data = tempBuffer;
        b->capacity = newCapacity;
    }
    b->data[b->size] = ch;
    b->size++;
}
void copyFilesToBuffer(Buffer *b, FILE *f){
    char ch = ' ';
    while ((ch = fgetc(f))!= EOF){
        copyDataToBuffer(b,ch);
    }
    printf("copied data from files to buffer");
}
void pasteDataFromBufferToFile(FILE *file, Buffer *b){
    int currentCount = 0;
    while(currentCount<b->size){
        fputc(b->data[currentCount],file);
        currentCount++;
    }
}
int main(int argc, char *argv[]){
    if(argc<2){
        printf("for copying please provide the source and destination file\n");
        printf("eg. ./cp source.txt destination.txt\n");
        return 1;
    }
    FILE *sourceFile = fopen(argv[1],"r");
    if(sourceFile == NULL){
        printf("the source file does not exits\n");
        return 1;
    }
    FILE *destinationFile = fopen(argv[2],"w");
    if(destinationFile == NULL){
        printf("something went wrong destination file is NUll\n");
        return 1;
    }
    Buffer managerBuffer;
    initilizeBuffer(&managerBuffer);
    copyFilesToBuffer(&managerBuffer,sourceFile);
    pasteDataFromBufferToFile(destinationFile,&managerBuffer);

    free(managerBuffer.data);
    printf("successfully copied......................\n");
    return 0;
}