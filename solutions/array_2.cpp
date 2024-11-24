#include <iostream>

using namespace std;

// check in an array how many numbers are there like if in an array user input how many 5 is there 

int counter(int ar[], int target ,int size){
    int count = 0;
    for(int i = 0; i<size;i++){
        if(ar[i] == target){
            count++;
        }
    }
    return count;
}

int main(){
    cout<<"please enter the size of array"<<endl;
    int userspace ;
    cin >> userspace;
    int arr[userspace];
    for(int i = 0; i<userspace;i++){
        cout<<"please enter element "<<(i+1)<<" : ";
        cin>>arr[i];
    }
    cout<<"user input successfully taken";
    cout<<endl;

    cout<<"please enter the counter you want to check"<<endl;

    int userTarget;

    cin>> userTarget;


    int result = counter(arr, userTarget, userspace);



    cout<<"the value in result variable is "<< result<<endl;


    // for(int i = 0; i<userspace;i++){
    //     cout<<arr[i];
    //     cout<<endl;
    // }


}