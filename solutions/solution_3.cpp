//check if the number is prime or not 
#include<iostream>
using namespace std;

bool primeChecker(int target) {  // Using int instead of bool
  if (target == 1) {
    return false;  // false
  }
  for (int i = 2; i < target; i++) {
    if (target % i == 0) {
      return false;  // false
    }
  }
  return true;  // true
}
int main(){
  int n ;
  cout <<" please enter the n : ";
  cin>>n;

  for(int i = 1; i<=n;i++){
    if(primeChecker(i)){
    cout<< i << " is a prime number"<<endl;
    }else{
      cout<< i << " is not prime number"<<endl;
    }
  }
}

