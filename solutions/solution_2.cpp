// find the sum of all even numbers

#include<iostream>

using namespace std;

 int main(){
  

  int total = 0;
  int n ;
  cout<<"please provide the n number"<<endl;

  cin>>n;   

  for(int i = 0; i<= n; i++){
    if(i%2 == 0){
      total = total + i;
    cout<<i<<" is even number"<<endl;

    }
    else{
      cout<<i<<" is an odd number"<<endl;
    }
  }
  
  cout<<"total of even number "<<total<<" up until "<<n<<endl;



} 
