#include<stdio.h>
#include<stdlib.h>



int main(){
    printf("How many numbers do you want to store?\n");
    int userInput;
    scanf("%d",&userInput);
    int *p =  malloc(userInput * sizeof(int));
    for(int i =0;i<userInput;i++){
        printf("please give input for %d\n",i+1);
        scanf("%d",&p[i]);
    }
     for(int i =0;i<userInput;i++){
        printf("the output for %d\n",p[i]);
    }
    free(p);
    printf("memory is freed");    
    return 0;
}