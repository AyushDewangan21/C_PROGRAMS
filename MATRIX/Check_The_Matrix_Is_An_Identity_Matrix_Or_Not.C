#include <stdio.h>

/* In a square matrix, if all the main diagonal elements are 1's 
and all the remaining elements are 0's, it is called an Identity Matrix. */

int main() {
    int arr1[10][10];
    int r1, c1;
    int i, j, yn = 1;

    printf("\nCheck whether a given matrix is an identity matrix :\n");

    // Input the number of Rows for the matrix
    printf("Input number of Rows for the matrix :");
    scanf("%d", &r1);

    // Input the number of Columns for the matrix
    printf("Input number of Columns for the matrix :");
    scanf("%d", &c1);
	
    // Input elements into the matrix
    printf("Input elements in the matrix :\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the matrix
    printf("The matrix is :\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1 ;j++)
        {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Check whether the matrix is an identity matrix or not
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            if ((i == j && arr1[i][j] != 1) || (i != j && arr1[i][j] != 0))
            {
                yn = 0;
                break;
            }
        }
        if (yn == 0) 
        {
            break;
        }
    }


	// Display the result
    if(yn == 1)
    {
        printf(" The matrix is an identity matrix.\n\n");
    }
    else
    {
        printf(" The matrix is not an identity matrix.\n\n");
    }

    return 0;
}


// Output Be Like
/*

Input number of Rows for the matrix :3
Input number of Columns for the matrix :3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
Expected Output :
The matrix is :
1 0 0
0 1 0
0 0 1
The matrix is an identity matrix.

*/
