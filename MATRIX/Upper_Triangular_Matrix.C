#include <stdio.h>

int main()
{
    int arr1[10][10], i, j, n;
    float determinant = 0;

    // Display the purpose of the program
    printf("\nDisplay the upper triangular of a given matrix :\n");

    // Input the size of the square matrix
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    // Input elements into the matrix
    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the original matrix
    printf("The matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Display upper triangular matrix by setting lower triangular elements to zero
    printf("\nSetting zero in upper triangular matrix\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            if (i >= j) 
            {
                printf("% 4d", arr1[i][j]); // Print the original elements if i >= j (upper triangular)
            } 
            else
            {
                printf("% 4d", 0); // Print zero if i < j (lower triangular)
            }
        }
    }

    return 0;
}



// Output Be Like
/* 

Test Data :
Input the size of the square matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :
1 2 3
4 5 6
7 8 9

Setting zero in upper triangular matrix

1 0 0
4 5 0
7 8 9

*/
