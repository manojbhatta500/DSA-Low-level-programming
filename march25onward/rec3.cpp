#include <iostream>
using namespace std;


void assecndingRec(int n){
    if(n>0){
        assecndingRec(n-1);
        cout<<n<<endl;
    }
}

int main() {

    int a = 10;

    assecndingRec(a);

    return 0;
}