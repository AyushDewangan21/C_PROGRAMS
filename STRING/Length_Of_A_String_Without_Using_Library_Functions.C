#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int l = 0; 

    printf("Input the string : ");

    // Read a string from the standard input (keyboard) using fgets()
    fgets(str, sizeof str, stdin);

    while (str[l] != '\0')
    {
        l++; 
    }

    printf("Length of the string is : %d\n\n", l - 1); 
	
	return 0;
}
