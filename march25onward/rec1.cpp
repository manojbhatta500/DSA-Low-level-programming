#include <iostream>
using namespace std ;
void rec (int i){
    if(i>0){
        rec(i-1);
        cout<<i<<endl;
    }
}
int main() {
    int a = 3;
    rec(a);
    return 0;
}