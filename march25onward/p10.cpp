#include<iostream>


using namespace std;




int main(){

	int *p = (int *)malloc(sizeof(int));
	*p = 50;
	cout<<"the address is "<<p<<" the  value is : "<<*p<<endl;
}
