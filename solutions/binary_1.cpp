#include <iostream>

using namespace std;

int binary_search(int arr[],int size, int target){
    int start = 0;
    int end = size-1;
    while(start<= end){
            int mid = start+end/2;

        if(arr[mid] == target){
            return mid;
        }

        if(target >arr [mid]){
            start = mid +1;
        }else{
            end = mid -1;

        }


    }

    return -1;


}

int main(){

    int arr[6] = {2,4,8,16,32,64};

    int result = binary_search(arr, 6, 4);

    if(result == -1){
        cout<<"sorry can't find the element "<<endl;
    }else{
        cout<<" the index is : "<<result<<endl;
    }


}