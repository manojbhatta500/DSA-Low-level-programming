
// 2. Remove Duplicates from Sorted Array
// Problem: Given a sorted array, remove duplicates in-place such that each unique element appears only once. Return the new length of the array.
// Example:
// Input: arr = [1, 1, 2, 3, 3, 4]
// Output: arr = [1, 2, 3, 4], Length = 4
// HinHint: Use two pointers, one for iterating through the array and the other for maintaining the position of the unique elements.


#include<iostream>
#include<vector>

using namespace std;

#include <iostream>
#include <vector>

using namespace std;

vector<int> processor(vector<int> ar) {
    for (int i = 0; i < ar.size() - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            ar.erase(ar.begin() + i);
            i--; // Adjust the index after erasing
        }
    }
    return ar;
}

int main() {
    vector<int> vc = {1, 1, 2, 3, 3, 4};

    cout<<"before processing "<<endl;
    for (int val : vc) {
        cout << val << " ";
    }
    cout << endl;

    vector<int> output = processor(vc);

    cout << "After processing:" << endl;
    for (int val : output) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
