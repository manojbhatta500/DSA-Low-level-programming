#include<iostream>
#include<climits>

using namespace std;
int largest(int ar[], int size){
  int largestInfinityNumber = INT_MIN;
  for(int i= 0; i<size;i++){
    if(ar[i]>largestInfinityNumber){
      largestInfinityNumber = ar[i];
    }
  }
  return largestInfinityNumber; 
}
int main(){
  int result[] = {1,24,6,23,74,21,12,121221,1999};

  int res = largest(result,sizeof(result)/sizeof(result[0]));

  cout<<"largest number in an array is "<<res<<endl;
}
