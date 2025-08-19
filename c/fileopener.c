#include<stdio.h>


int main(){
	FILE *fp = fopen("readme.txt","w");
	if(fp == NULL){
		printf("error while opening file");
		return 1;
	}
	fprintf(fp,"hello world \n");
	fclose(fp);
	return 0;
}

