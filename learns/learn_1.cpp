// learning  c++  language
// here we will learn how to get an length of an array
//
#include<iostream>

using namespace std;



int main(){
  int array[] = {1,23,4,2};
  cout<<"length is "<<(sizeof(array)/sizeof(array[0]))<<endl;
}


