// 🔹 Problem 3: Dynamic Array with Sum

// Dynamically allocate memory for n integers.

// Fill it with values (your choice or user input).

// Compute the sum of all elements.

// Print sum, then free.

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    printf("please enter the length of array");
    int userinput;
    scanf("%d",&userinput);

    int *pointer = malloc(userinput * sizeof(int));
    int sum=0;
    for(int i=0;i<userinput;i++){
        printf("enter the number for index %d \n",i);
        scanf("%d",&pointer[i]);
        sum = sum + pointer[i];
    }

    printf("the sum of total array is %d\n",sum);

    return 0;
}