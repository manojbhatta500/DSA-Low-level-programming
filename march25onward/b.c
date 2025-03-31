#include<stdio.h>



// addition of multidimantional element


int main(){
	int arr[2][3] = {{1,2,3},{4,5,6}};

	int total = 0;


	for(int i =0;i<2;i++){
		for(int j = 0;j<3;j++){
			total = total + arr[i][j];
		}
	}


	printf("the addition is %d",total);


}