#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char sentence[] = "Welcome To Tech World!";  
    int wordCount = 0;  
      
    for(int i = 0; i < strlen(sentence)-1; i++)
    {  
        //Counts all the spaces present in the string  
        //It doesn't include the first space as it won't be considered as a word  
        if(sentence[i] == ' ' && isalpha(sentence[i+1]) && (i > 0)) {  
            wordCount++;  
        }  
    }    

    //To count the last word present in the string, increment wordCount by 1  
    wordCount++;  
      
    //Displays the total number of words present in the given string  
    printf("Total number of words in the given string: %d", wordCount);  
   
    return 0;  
}   
