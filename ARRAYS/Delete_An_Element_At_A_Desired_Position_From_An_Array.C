#include <stdio.h>

int main() 
{
  int arr1[100], i, pos, n;

  printf("Input the size of the array : ");
  scanf("%d", &n);

  // Input values for the array
  printf("Input %d elements in the array in ascending order: ", n);
  for (i = 0; i < n; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr1[i]);
  }

  // Input the position to delete
  printf("\nInput the position where to delete: ");
  scanf("%d", &pos);

  // Locate the position in the array
  i = 0;
  while (i != pos - 1)
  {
     i++;
  }

  // Shift elements to the left to replace the deleted element
  while (i < n)
  {
    arr1[i] = arr1[i + 1];
    i++;
  }
  n--;

  // Display the new list after deletion
  printf("\nThe new list is : ");
  for (i = 0; i < n; i++)
  {
    printf("  %d", arr1[i]);
  }

  return 0;
}
