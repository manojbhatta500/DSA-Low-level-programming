#include<iostream>
#include <string>
#include <utility>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    // learning two pointer approach using vector

    vector<int> ar = {1,32,54,77,22};

    for(int i= 0;i<ar.size();i++){
        cout<<ar[i]<<endl;
    }
    
    cout<<"after change"<<endl;

    int start = 0;
    int end = ar.size() - 1;

    while(start<end){
        swap(ar[start],ar[end]);
        start++;
        end--;
    }


    for(int i= 0;i<ar.size();i++){
        cout<<ar[i]<<endl;
    }




    vector<string> cars = {"volvo"};

    cars.push_back("tesla");

    cars.push_back("mercedes");

    cars.push_back("volvo");

    cars.pop_back();

    for(string s : cars){
        cout<<s<<endl;
    }


}