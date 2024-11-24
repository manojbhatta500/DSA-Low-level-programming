#include<iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

/* 
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

*/

bool unique_occur(vector<int> arr){
    vector<int> unique_list;
    while(!arr.empty()){
        int result = 0;
        int current = arr[0];
        for(int i = 0;i<arr.size();i++){
            if(arr[i]== current){
                result++;
            }
        }
        arr.erase(remove(arr.begin(), arr.end(), current), arr.end());

        unique_list.push_back(result);
    }
    for(int i = 0;i<unique_list.size();i++){
        for(int j = i+1;j<unique_list.size();j++){
            if(unique_list[i] == unique_list[j]){
                return  false;
            }
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,2,1,1,3,};
    bool result = unique_occur(arr);

    cout<<"result : "<<result<<endl;

}