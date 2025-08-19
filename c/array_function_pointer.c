#include<stdio.h>


int sumArray(int a[], int length){
    int sum =0;
    for(int i =0;i<length;i++){
        sum = sum + a[i];
    }
    return sum;
}
int maxArray(int a[], int length){
    int max =0;
     for(int i =0;i<length;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int minArray(int a[], int length){
    int min = 10000000;
     for(int i =0;i<length;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int main(){
  int (*changer)(int[],int);
  int exampleArray[]= {9,99,1,3,999,1000,5000,2000};
  int  length = sizeof(exampleArray)/sizeof(int);

  changer = &sumArray;
  printf("the sum of array is %d\n",changer(exampleArray,length));


  changer = &maxArray;
  printf("the max of array is %d\n",changer(exampleArray,length));


  changer = &minArray;
  printf("the min of array is %d\n",changer(exampleArray,length));





}