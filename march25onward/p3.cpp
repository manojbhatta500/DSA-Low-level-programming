#include<iostream>


using namespace std;


void counter(int n){
	for(int i=0;i<n;i++){
		cout<<i<<endl;
	}

}


/*
eg the above code is kind of 0(n)
but drop constant means any operation like 
n+n = 2n
0(n) it is this beacasue we will drop constant 
*/


int main(){
	counter(100);
	return 0;
}