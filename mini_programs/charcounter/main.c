#include<stdio.h>
#include<stdlib.h>


typedef  struct {
    int data;
}Buffer;


void initilzeBuffer(Buffer *b){
    b->data = 0;
}

void increaseBuffer(Buffer *b){
    b->data++;
}




int main(int args,char *c[]){
    if(args<1){
        printf("please give file input it is character counter");
        printf("eg ./cc input.txt");
        return 1;

    }

    FILE *inputfile = fopen(c[1],"r");

    if(inputfile == NULL){
        printf("something went wrong while opening input file");
        return 1;
    }

    Buffer b1;
    initilzeBuffer(&b1);

    char  ch ;
    while((ch = fgetc(inputfile)) != EOF){
        increaseBuffer(&b1);
    }


    printf("the total character in this file is %d\n",b1.data);


    return 0;
}