#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int add(int a,int b);

int sub(int a,int b);


int main(int args,char *chars[]){
    if(args<2){
        printf("you need to provide 2 numbers\n");
        printf("eg ./calc 1 4\n");
    }

    int num1 = atoi(chars[1]);
    int num2 = atoi(chars[2]);

    
    pid_t manager = fork();

    if(manager == -1){
        perror("fork failed");
        exit(1);
    }


    if(manager == 0){
        int output = add(num1,num2);
        printf("the addition is %d\n",output);
    }else{
        int output = sub(num1,num2);
        printf("the subtraction is %d\n",output);
    }

}

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}