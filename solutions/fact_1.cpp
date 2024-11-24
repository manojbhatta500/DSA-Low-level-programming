#include<iostream>

using namespace std;

int fact(int n){
    int ans = 1;
    for(int i= 1;i<=n;i++){
        ans = ans * i;
    }

    return ans;
}

// nCr = n! / r! * (n - r)!


int ncr  (int n, int r){
    int upper = fact(n);
    int lower = fact(r) * fact(n-r);
    int ans = upper / lower;
    return ans;
}

int main(){
    int a,b;
    cin>> a >> b;
    cout<< "the ncr of value is "<<endl;
   int ans =  ncr(a, b);
    cout<<ans<<endl;
}

