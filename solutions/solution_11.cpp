#include<iostream>

using namespace std;

int main(){
  int sum  = 0;
  int count = 1;
  int n;

  cout<<" enter the n : ";
  cin >> n;
  while(count<= n){
    sum = sum + count;
    count = count  + 1;
  }
  cout <<" the sum upto number n is : "<<endl;
  cout<<sum<<endl;
}
