#include<iostream>

using namespace std;


int multer(int i ){
	return i + 10;
}


int main(){
	int value = multer(1);
	cout<<"the value is "<<value<<endl;
	return 0;
}

/*

here the complexity is 0(1) because of the operations 
the complexity dosen't increases if the number  increses 


*/


/*

0(log n)

*/