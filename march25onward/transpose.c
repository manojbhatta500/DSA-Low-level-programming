#include<stdio.h>


int main(){

	int original_array[2][3] = {{1,2,3},{4,5,6}};

	int new_row = 3, new_col = 2;

	int new_array [new_row][new_col];

	// for transposing

	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			new_array[j][i] = original_array[i][j];  
		}
	}

	// now lets see the transpose 

	for(int i = 0;i<3;i++){
		for(int j = 0;j<2;j++){
			printf("%d ",new_array[i][j]);
		}
		printf("\n");
	}

	return 0;
}