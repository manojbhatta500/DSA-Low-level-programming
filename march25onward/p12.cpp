#include <iostream>
using namespace std;

void swapper(int *a,int *b){
    int c ;
    c = *a;
    *a = *b;
    *b = c;
    cout<<"the swap function is completed"<<endl;


}


int main() {
    int a,b;
    a = 10;
    b = 20;
    swapper(&a,&b);
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;


    return 0;
}