#include <iostream>

using namespace std;

/*
alternate but after leaving one element ??
like 
{1,2,3,4,5,6,7,8,9}
to output like this
{3,2,1,6,5,4,9,8,7}
*/

void alternateSwap(int arr[],int size){
    for(int i = 0;i<size;i=i+3){
        if(i+1<size){
            swap(arr[i],arr[i+2]);
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
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};

    int size= sizeof(arr)/sizeof(arr[0]);

    cout<<"the size of array is "<<size<<endl;

    printArray(arr, size);
    cout<<"processing"<<endl;
    alternateSwap(arr, size);

    printArray(arr, size);






}