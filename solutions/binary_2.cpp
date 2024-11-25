#include <iostream>

using namespace std;

/*
first and last occurance in an array 
like this {1,3,3,3,5}
first occurance index is 1 and last occurance index is 3
*/

int first_occurance(int arr[],int size,int target ){
    int start = 0;
    int end = size -1;

    int answer = -1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            answer = mid;
            end = mid -1;
        }else if(arr[mid]> target){
            end = mid -1;
        }else{
            start = mid +1;
        }
    }

    return  answer;
}

int last_occurance(int arr[],int size,int target){
    int start = 0;
    int end = size -1 ;
    int answer = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == target){
            answer = mid;
            start = mid + 1;
        }else if( arr[mid]< target){
            start = mid + 1;
        }else if(arr[mid]> target){
            end = mid -1;
        }
    }

    return  answer;

}

int main(){
    int arr[] = {1,3,3,3,5};
    int first_occurance_index = first_occurance(arr, 5, 3);
    int last_occurance_index = last_occurance(arr, 5, 3);
    pair<int,int>  occurance_index ;
    occurance_index.first = first_occurance_index;
    occurance_index.second = last_occurance_index;
    cout<<"first occurance : "<<first_occurance_index<<endl;
    cout<<"last occurance : "<<last_occurance_index<<endl;

    int total_occurance = (last_occurance_index - first_occurance_index ) + 1;

    cout<<"total occurance is : "<<total_occurance<<endl;
}