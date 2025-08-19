#include<stdio.h>

int starlen(char *ch);

int main(){
	char test1[]= "hello";
	int length = starlen(test1);
	printf("the length from starlen is %d \n",length);
	return 0;

}

int starlen(char *ch){
	int length = 0;
	while(*ch != '\0'){
		length++;
		*ch++;
	}
	printf("the length of array is %d",length);
	return length;
}
