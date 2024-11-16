#include<iostream>
#include<algorithm>
using namespace std;
// two pointer approach 
// reverse an array 
void reverser(int ar[] , int size){
  int start = 0;
  int end = size-1;

  while(start<end){
    swap(ar[start],ar[end]);
    start++;
    end--;
  }
}
int main(){
  int ar[]= {1,33,42,12,2};
  cout<<"before change"<<endl;
  int len = sizeof(ar)/sizeof(ar[0]);
  for(int i = 0;i<len;i++){
    cout<<ar[i]<<" ";
  }
  cout<<endl;
  cout<<"after change"<<endl;
  reverser(ar,len);
  
  for(int i = 0;i<len;i++){
    cout<<ar[i]<<" ";
  }
  cout<<endl;
}
