#include<iostream>
#include<string.h>

using namespace std;


struct Person{
	char name[50];
	int age;
	float height;
};


int main(){

	struct Person p1;
	struct Person *ptrPerson;

	ptrPerson = &p1;
	strcpy(p1.name,"manoj bhatta");
	p1.age = 25;
	p1.height = 6.1f;

	cout<<"p1 name is "<<p1.name<<endl;
	cout<<"p1 age is "<<p1.age<<endl;
	cout<<"p1 height is "<<p1.age<<endl;

}