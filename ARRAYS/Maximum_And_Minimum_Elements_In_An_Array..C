#include <stdio.h>

int main()
{
  int arr1[100];
  int i, max, min, n;

  printf("Input the number of elements to be stored in the array :");
  scanf("%d", &n);

  // Input elements for the array
  printf("Input %d elements in the array :\n", n);


  for (i = 0; i < n; i++)
  {
     printf("element - %d : ", i);
     scanf("%d", &arr1[i]);
  }

  // Initialize max (mx) and min (mn) with the first element of the array
  max = arr1[0];
  min = arr1[0];

  // Traverse the array to find the maximum and minimum elements
  for (i = 1; i < n; i++)
  {
    // Update mx if the current element is greater
    if (arr1[i] > mx)
    {
       mx = arr1[i];
    }

    // Update mn if the current element is smaller
    if (arr1[i] < mn)
    {
      mn = arr1[i];
    }
  }

 // Print the maximum and minimum elements
 printf("Maximum element is : %d\n", mx);
 printf("Minimum element is : %d\n\n", mn);

 return 0;
}
