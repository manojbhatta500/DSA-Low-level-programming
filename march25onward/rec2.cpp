#include <iostream>
using namespace std;

// Print Numbers from N to 1 (Descending Order)


void decending(int a){
    if(a>0){
        cout<<a<<endl;
        decending(a-1);
    }
}

void decendingLoop(int a){
    if(a==0){
        cout<<"input is 0";
    }
    for(int i = a;i>0;i--){
        cout<<i<<endl;
    }
}

int main() {
    int a = 10;
    decending(a);
    decendingLoop(10);
    return 0;
}