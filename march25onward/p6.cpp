#include<iostream>

 using namespace std;

 int main(){
 	int* num1 = new int(10);
 	int* num2 = num1; 


 	 *num1 = 22;



 	cout<<"num 1: "<<*num1<<endl;
 	cout<<"num 2: "<<*num2<<endl;
 }