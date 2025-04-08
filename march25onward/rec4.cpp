#include <iostream>

using namespace std;

//3️⃣ Sum of First N Natural Numbers



int adder(int n){
    if(n== 0){
        return 0;
    }
    return n + adder(n-1);
}



int main() {

    int a = 5;

    int result = adder(a);

    cout<<"the addition is : "<<result<<endl;


    return 0;
}