#include<iostream>
/*
  * this is what i am doing on linear search 
  */
using namespace std;
int search(int arr[],int target, int size){
  
  for(int i =0;i<size;i++){
    if(arr[i] == target){
      return i;
    }
  }
  return -1; 
}
int main(){
  int list[] = {1,34,12,553,100};
  int targetIndex = search(list,100,sizeof(list)/sizeof(list[0]));
  cout<<"the index is "<<targetIndex<<endl;

}
