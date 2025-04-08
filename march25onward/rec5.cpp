#include <iostream>
using namespace std;


int fact(int n){
    if(n == 1){
        return 1;
    }

    return n * fact(n-1);
}

int main() {
    int a = 5;
    int result = fact(a);
    cout<<"the factorial of a is "<<result<<endl;
    return 0;
}