/*
* make this pattern 
* 1 2 3 4...... n 
* 1 2 3 4 ..... n
* .
* .
* ...... n
*/

#include<iostream>

using namespace std;

int main(){


  cout << "please provide the n : ";

  int n;

  cin >> n;

  for(int i = 0;i< n;i++){
    for(int j= 1; j<= n;j ++){
      cout<< j ;
    }
    cout<<endl;
  }
}
