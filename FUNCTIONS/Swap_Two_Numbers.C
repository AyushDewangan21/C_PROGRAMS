#include<stdio.h>

void swap(int *,int *); 

int main()
{

    int n1,n2;   
    printf("Input 1st number : ");
    scanf("%d",&n1);
    printf("Input 2nd number : ");
    scanf("%d",&n2);	

    printf("Before swapping: n1 = %d, n2 = %d ",n1,n2);
	
    swap(&n1,&n2);      // Calling swap function

    printf("\nAfter swapping: n1 = %d, n2 = %d \n",n1,n2);
    return 0;
}


void swap(int *p,int *q)
{
    int tmp;
    tmp = *p; // tmp store the value of n1
    *p=*q;    // *p store the value of *q that is value of n2
    *q=tmp;   // *q store the value of tmp that is the value of n1
}
