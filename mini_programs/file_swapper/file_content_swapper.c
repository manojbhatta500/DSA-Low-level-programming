#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char *ch;
	int size;
	int capacity;
}fileBuffer;

void inititlizeFileBuffer(fileBuffer *f1){
	f1->ch = malloc(2 * sizeof(char));
	if(f1->ch == NULL){
		printf("failed to initilize the buffer\n");
	}
	f1->capacity = 0;
	f1->size = 0;
}


void storeCharacterIntoBuffer(fileBuffer *f,char ch){
	if(f->size == f->capacity){
		size_t newCapacity = (f->capacity +1) * sizeof(char);
		char *t = realloc(f->ch, newCapacity);
		if(t == NULL){
			printf("failed to reallocate the memory\n");
		}
		f->ch = t;
		f->capacity = newCapacity;
	}
	f->ch[f->size] = ch;
	f->size ++;
}


void storeCharFromFileToBuffer(FILE *fileName, fileBuffer *fileBuffer){
	char ch = ' ';
	while ((ch = fgetc(fileName)) != EOF){
		storeCharacterIntoBuffer(fileBuffer,ch);
	}
	printf("successfully completed the transmission of file data  to buffer\n");
}


void saveContentToFile(FILE *file,fileBuffer *buffer){
	int fileDataCounter = 0;
	
	while(fileDataCounter < buffer->size){
		fputc(buffer->ch[fileDataCounter],file);
		fileDataCounter++;
	}
}


int main(){
	FILE *file1 = fopen("file1.txt","r+");
	FILE *file2 = fopen("file2.txt","r+");

	fileBuffer buffer1;
	fileBuffer buffer2;

	inititlizeFileBuffer(&buffer1);
	inititlizeFileBuffer(&buffer2);


	storeCharFromFileToBuffer(file1,&buffer1);
	storeCharFromFileToBuffer(file2,&buffer2);



	fclose(file1);
	fclose(file2);


	file1 = fopen("file1.txt","w");
	file2 = fopen("file2.txt","w");

	saveContentToFile(file1,&buffer2);
	saveContentToFile(file2,&buffer1);



	fclose(file1);
	fclose(file2);



	printf("the swap of file is done and amigo\n");
	return 0;
}
