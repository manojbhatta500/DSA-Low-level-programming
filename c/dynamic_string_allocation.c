#include<stdio.h>
#include<stdlib.h>



int main(){
    char buffer[100];

    printf("Please Enter The Word : ");
    scanf("%s",buffer);

    int length = 0;

    while(buffer[length] != '\0'){
        length++;
    }

    char *word = malloc((length+1)* sizeof(char));
    if(word == NULL){
        printf("memory  initilization failed");
        return 0;
    }

    for(int i =0;i<=length;i++){
        word[i] = buffer[i];
    }


    for(int i =0; i<=length;i++){
        printf("%c",word[i]);
    }

    printf("\n");
    free(word);

    printf("memory is freed\n");


    return 0;
}