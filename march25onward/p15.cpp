#include <iostream>
#include<string.h>

using namespace std;

struct Person{
    char name[10];
    char address[10];
};

void personReader(Person *p){
    cout<<"he name of the person is :"<<endl;
    for(int i =0;i<10;i++){
       cout<< p->name[i]<<" ";
    }
    cout<<endl;
    cout<<"the address of the person is :"<<endl;
    for(int i =0;i<10;i++){
       cout<< p->address[i]<<" ";
    }
    cout<<endl;

}

void personWriter(Person *p,char n[10],char a[10]){
    for(int i =0;i<10;i++){
        p->name[i] = n[i];
    }
    for(int i = 0;i <10;i++){
        p->address[i] = a[i];
    }
}

int main() {
struct Person *p = (struct Person *)malloc(sizeof(Person));
char outerName[10];
char outerAddress[10];
strcpy(outerName,"manoj");
strcpy(outerAddress,"shana");
cout<<"person reader before the change "<<endl;
personReader(p);
cout<<"writer function called"<<endl;
personWriter(p,outerName,outerAddress);
cout<<"writer function called successfully "<<endl;
cout<<"after the change "<<endl;
personReader(p);
return 0;
}