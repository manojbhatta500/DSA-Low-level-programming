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
    char ch ;
    while ((ch = fgetc(f))!= EOF){
        copyDataToBuffer(b,ch);
    }
    printf("copied data from files to buffer");
}





void mergeFilesIntoBuffer(FILE *f1,FILE *f2, Buffer *buffer){
    copyFilesToBuffer(buffer,f1);
    copyFilesToBuffer(buffer,f2);
}



void pasteDataFromBufferToFile(FILE *file, Buffer *b){
    int currentCount = 0;
    while(currentCount<b->size){
        fputc(b->data[currentCount],file);
        currentCount++;
    }
}




int main(int arg,char *argv[]){
      if(arg<3){
        printf("for copying please provide the source and destination file and mergerfile\n");
        printf("eg. ./merger file1.txt file2.txt mergerfile.txt\n");
        return 1;
    }


    FILE *fileOne = fopen(argv[1],"r");
    if(fileOne == NULL){
        printf("the file one not exits\n");
        return 1;
    }
    FILE *file2 = fopen(argv[2],"r");
    if(file2 == NULL){
        printf("file2 does not exits\n");
        return 1;
    }

    Buffer b1;

    initilizeBuffer(&b1);

    mergeFilesIntoBuffer(fileOne,file2,&b1);


    FILE *mergerFIle = fopen(argv[3],"w");

    pasteDataFromBufferToFile(mergerFIle,&b1);



    printf("\nmerger complete");














}