#include <stdio.h> 
 
int main() 
{ 
    char str1[50] = "Hello"; 
    const char str2[] = " GeeksforGeeks!"; 
  
    concatenateStrings(str1, str2); 
  
    printf("Concatenated String: %s\n", str1); 
  
    return 0; 
}


void concatenateStrings(char* str1, const char* str2) 
{ 
    // Find the end of the first string 
    while (*str1 != '\0') 
    { 
        str1++; 
    } 
  
    // Copy characters from the second string to the end of 
    // the first string 
    while (*str2 != '\0') 
    { 
        *str1 = *str2; 
        str1++; 
        str2++; 
    } 
  
    // Ensure the resulting string is null-terminated 
    *str1 = '\0'; 
} 
