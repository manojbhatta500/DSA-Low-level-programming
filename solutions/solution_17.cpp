#include<iostream>
#include<climits>
   
using namespace std;

int smallest(int ar[],int size){
  int largestnumber = INT_MAX;
  for(int i = 0; i<size;i++){
    if(ar[i]<largestnumber){
      largestnumber = ar[i];
    }
  }
  return largestnumber;
}


int main(){
  int realArray[] = {20,1234,215,243,6643,2432};
  int size = sizeof(realArray)/sizeof(realArray[0]);

  int result = smallest(realArray,size);

  cout<<"the smallest number in an array is "<<result;
  cout<<endl;

}
