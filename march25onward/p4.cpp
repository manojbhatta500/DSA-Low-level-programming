#include<iostream>

using namespace std;

//o(n) is good case then o(n2)

// drop non dominant
// o(n2)+ 0(n) by the rule it should be 0(n3) but we also 
// have an non dominant rule and n(n2)


void counter(int n){
	for(int i = 0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<i<<j<<endl;
		}
	}
	cout<<"the 0(n2) is completed;"<<endl;

	for(int k = 0;k<n;k++){
		cout<<k<<endl;
	}
}

int main(){
counter(20);
return 0;
}