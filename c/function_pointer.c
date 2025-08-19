#include<stdio.h>


int add(int a, int b){return a+b;}
int minus(int a, int b){return a-b;}

int main(){
    int (*changer)(int,int);
    changer = &add;
    printf("addition %d",changer(5,8));
    changer = &minus;
    printf("the subtraction %d",changer(10,5));
}