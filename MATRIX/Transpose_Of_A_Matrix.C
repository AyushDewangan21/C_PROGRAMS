#include <stdio.h>

int main() {
    // Declare matrices and variables
    int arr1[50][50], brr1[50][50], i, j, r, c;

    // Display transpose of a matrix
    printf("\n\nTranspose of a Matrix :\n");

    // Input the rows and columns of the matrix
    printf("\nInput the rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    // Input elements in the first matrix
    printf("Input elements in the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
            printf("%d\t", arr1[i][j]);
    }

    // Transpose of the matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            // Assigning transposed values to the new matrix
            brr1[j][i] = arr1[i][j];
        }
    }

    // Display the transpose of the matrix
    printf("\n\nThe transpose of a matrix is : ");
    for (i = 0; i < c; i++)\
    {
        printf("\n");
        for (j = 0; j < r; j++)
        {
            printf("%d\t", brr1[i][j]);
        }
    }
    printf("\n\n");

    return 0;

/*

Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4

*/
