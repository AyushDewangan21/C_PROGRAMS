#include <stdio.h> 
 
int main()
{ 
    char str[] = "Hello, World"; 
    char *ptr = str;
    int len = 0;
 
    while (*ptr != '') 
    {
        len++; 
        ptr++;
    } 
 
    printf("The length of the string '%s' is %d\n", str, len); 
 
    return 0; 
}
