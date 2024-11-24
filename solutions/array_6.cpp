#include <iostream>

using namespace std;

int single_element_finder(int arr[],int size){
    for(int i = 0;i<size;i++){
        int count = 0;
        for(int j = 0;j<size;j++){

            if(arr[i] == arr[j]){
                count ++;
            }
        }
         if(count == 1){
            return arr[i];
            break;
        }
       
    }

    return 0;
}

int main(){
    int arr[5] = {2,2,3,3,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int single_element = single_element_finder(arr, n);

    cout<<"single element in an array is : "<<single_element<<endl;

}