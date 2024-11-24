#include <iostream>

// sum of all numbers in an array

using namespace std;

int totaller (int ar[10]){

    int total = 0;
    for(int i = 0; i<10;i++){
        total = total + ar[i];
    }
    return total;
}

int main(){

    int array[10];
    for(int i =0;i<10;i++){
        cin>>array[i];
        cout<<endl;
    }

    int sum = totaller(array);
    cout<<"the total is sum : "<< sum <<endl;
}