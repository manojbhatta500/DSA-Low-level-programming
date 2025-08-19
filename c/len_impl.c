#include<stdio.h>


int find_the_sum_of_array(int a[],int totalLengthOfArray);

int main(){
    int a[] = {9,8,2,2,7,0,6,3,4,5};
    int a_length = sizeof(a)/sizeof(int);
    int sum = find_the_sum_of_array(a,a_length);
    printf("the sum of array is %d \n",sum);
    return 0;
}

int find_the_sum_of_array(int *a ,int totalLengthOfArray){
    int sum = 0;
    for(int i =0;i<totalLengthOfArray;i++){
        sum =  sum  + *(a+i);
    }
    return sum;
}