#include<stdio.h>


int main(){

    int arr[2][3] = {1,2,3,4,5,6};
    for(int i = 0;i <2;i++){
        for(int j = 0;j<3;j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

//     // Printing all elements
//     for(int i = 0; i < 2; i++) {   // Row loop
//         for(int j = 0; j < 3; j++) { // Column loop
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n"); // New row
//     }

//     return 0;
// }
