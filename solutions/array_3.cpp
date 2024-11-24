#include <iostream>

using namespace std;


void reverser (int ar[],int size){
    int start = 0;
    int end = size-1;
    int bucket = 0;
    while(start<end){
        // ar[start] = bucket;
        // ar[start] = ar[end];
        // ar[end] = bucket;

        bucket = ar[start];
         ar[start] = ar[end];
         ar[end] = bucket;
        start ++;
        end--;
    }
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
    cout<<"visualization : ";
     for(int i = 0; i<userspace;i++){
        cout<<arr[i]<< ", ";
    }
    cout<<endl;
    cout<<"calling reverser function"<<endl;

    reverser(arr, userspace);

    cout<<"visualization  after reverser function: ";
     for(int i = 0; i<userspace;i++){
        cout<<arr[i]<< ", ";
    }
    cout<<endl;



    

}