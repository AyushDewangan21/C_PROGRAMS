#include <stdio.h>
int main()
{   
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("\n%c is an UpperCase character",
               ch);
 
    else if (ch >= 'a' && ch <= 'z')
        printf("\n%c is an LowerCase character",
               ch);
 
    else
        printf("\n%c is not an alphabetic character",
               ch);

    return 0;

}
