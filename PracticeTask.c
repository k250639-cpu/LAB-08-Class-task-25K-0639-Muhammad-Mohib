#include <stdio.h>

int main() {
    int i, j;
    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];
    printf("Enter numbers for Matrix 1:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter numbers for Matrix 2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\nSum of Matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
