// here i will solve competitive  question

/* 
1. Pair Sum Problem
Problem: Given a sorted array of integers, find two numbers that sum to a given target.
Example:
Input: arr = [1, 2, 3, 4, 6], target = 6
Output: Indices: 1, 3 (2 + 4 = 6)
Hint: Use two pointers, one starting from the left and the other from the right, and move them based on the sum.

*/



#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> num = {1, 2, 3, 4, 6};
    int target = 6;

    int start = 0;
    int end = num.size() -1 ;

    while(start<end){
        if(num[start]+ num[end] == target){
            cout<<" index no "<<start<<" and index no "<< end<< " makes target "<<target<<endl;
        }
        start++;
        end--;
    }

    cout<<"no other combination makes 6"<<endl;


}