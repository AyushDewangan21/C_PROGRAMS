#include <stdio.h> 
#include <stdlib.h> 

// Function to convert decimal to binary.
char *decimal_to_binary(int dn)
{
  int i, j, temp;
  char *ptr;     
  temp = 0;    

  ptr = (char*)malloc(32+1); 

  // Loop to convert decimal to binary 
  for (i = 31 ; i >= 0 ; i--)
  {
    j = dn >> i;
    if (j & 1)   // Check if the rightmost bit is 1.
      *(ptr+temp) = 1 + '0'; // Store '1' in the string.
    else
      *(ptr+temp) = 0 + '0'; // Store '0' in the string.
    temp++; // Increment temp.
  }

  *(ptr+temp) = '\0'; // Add null terminator to the end of the string.
  return  ptr; // Return the binary string.
}

int main()
{
  int dn; // Declare a variable to hold the decimal number.
  char *ptr; // Declare a pointer to hold the binary string.

  printf("Input a decimal number: ");
  scanf("%d", &dn); // Prompt user for input and store it in dn.

  ptr = decimal_to_binary(dn); // Call the function to convert decimal to binary.

  printf("Binary number equivalent to said decimal number is: %s", ptr); // Print the binary string.

  free(ptr); // Free the dynamically allocated memory.
  return 0; // Indicate successful program execution.
}
