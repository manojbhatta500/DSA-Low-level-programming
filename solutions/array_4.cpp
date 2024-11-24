#include<iostream>
#include <utility>
/*
alternate the array 
{ 2,4,6,3,12,4}
output should be this 
{4,2,3,6,4,12}

*/

using namespace std;

void alternateSwap(int arr[],int size){
    for(int i = 0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}

void printArray(int arr[],int size){
    for(int i= 0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}


int main(){
    int arr[6] = { 8,4,0,2,6,9};

    int size= sizeof(arr)/sizeof(arr[0]);

    cout<<"the size of array is "<<size<<endl;

    printArray(arr, size);
    cout<<"processing"<<endl;
    alternateSwap(arr, size);

    printArray(arr, size);






}