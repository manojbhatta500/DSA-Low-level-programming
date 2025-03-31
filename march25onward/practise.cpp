#include<iostream>


using namespace std;
int main(){
	int* ptr = new int;
	*ptr = 10;

	cout<<"the ptr value is "<<ptr<<"\n";

	cout<<"the ptr value is "<<*ptr<<"\n";


	delete ptr;
	

	cout<<"the ptr is deleted ";

	return 0;


}