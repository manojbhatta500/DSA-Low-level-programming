#include <iostream>

using namespace std;

void bhagger(int a[],int index){
    for(int i = 0;i<index;i++){
        a[i] = a[i] + 1;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};

    bhagger(arr,5);


    for(int i = 0;i<5;i++){
        cout<<arr[i] <<endl;
    }


   


    return 0;
}