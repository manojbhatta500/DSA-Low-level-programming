#include<iostream>

using namespace  std;

int main(){
  int count  = 1;
  int sum  = 1;
  int n ;

 cout<<" enter the n : ";
  cin >> n;

  while(count <= n){
    sum = sum * count;
    count  = count + 1;
    
  }
  cout<< " the factorial is "<<endl;
  cout<<sum;

}
