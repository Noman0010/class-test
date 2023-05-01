#include <stdio.h>

int main() {
    int arr1[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
    int arr2[3][3] = {{4,5,6},{7,8,9},{9,10,11}};
    int sum[3][3];

    /*
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    */

    // adding two matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // printing the result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d   ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
