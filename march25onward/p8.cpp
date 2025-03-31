#include <iostream>
#include <stdio.h>


using namespace std;


struct  Rectangle
{
	int length;
	int width;
};


int main(){	

	struct Rectangle r = {10,5};
	cout<<"the previous length is "<<r.length<<endl;
	cout<<"the previous width is "<<r.width<<endl;
	cout<<"the previous area of rectangle is "<<r.length * r.width <<endl;
	r.length = 20;
	r.width = 30;
	cout<<"the new length is "<<r.length<<endl;
	cout<<"the new width is "<<r.width<<endl;
	cout<<"the new area of rectangle is "<<r.length * r.width <<endl;
	return 0;




}


/*

complex number struct 

int real ,
int img

student  struct

int roll;
char name[25];

char dept[10];

char address[50];



how to initilize struct in 

struct structName structvariable;



we can form any kind of complex data using struct 

*/