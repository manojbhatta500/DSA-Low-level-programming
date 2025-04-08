#include <iostream>

using namespace std;


int adder(int a,int b){
    int c ;
    c = a + b;
    return c;
}



int main() {
int a,b,c;
a = 10;
b = 20;
c = adder(a,b);
  
cout<<c<<endl;

return 0;
}