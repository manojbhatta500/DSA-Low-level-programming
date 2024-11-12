#include<iostream>

using namespace std;

int main(){
  int n;
  cout <<"please enter n : ";
  cin>> n;

  int i = 1;
  while(i<=n){
    int j = 3;
    while(j>0){
      cout<<j;
      j = j - 1;
    }
    cout<<endl;
    i = i + 1;

  }
}
