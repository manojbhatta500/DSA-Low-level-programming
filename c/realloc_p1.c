#include<stdio.h>
#include<stdlib.h>

int main(){
	int n =2;
	int *arr1 = malloc( n* sizeof(int));
	n = 10;
	int *newArray = realloc(arr1,n*sizeof(int));
	free(arr1);

	printf("the arr1 is freed");


	return 0;
}
