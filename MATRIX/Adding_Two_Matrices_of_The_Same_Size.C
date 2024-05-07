#include <stdio.h>

void main() {
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;

    // Prompt user for input
    printf("\n\nAddition of two Matrices :\n");
    printf("------------------------------\n");
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    // Input elements for the first matrix
    printf("Input elements in the first matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Input elements in the second matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }

    // Display the first matrix
    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
    }

    // Display the second matrix
    printf("\nThe Second matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
    }

    // Calculate the sum of the matrices
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            crr1[i][j] = arr1[i][j] + brr1[i][j];

    // Display the addition of two matrices
    printf("\nThe Addition of two matrix is : \n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", crr1[i][j]);
    }
    printf("\n\n");
}


/*

Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The Addition of two matrix is :

6 8
10 12

*/
