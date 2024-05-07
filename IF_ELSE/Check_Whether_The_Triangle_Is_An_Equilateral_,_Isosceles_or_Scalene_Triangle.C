#include<stdio.h>
int main() 
{
   
   int side_1, side_2, side_3;
   
   printf("Enter the sides of the triangle:");
   scanf("%d%d%d", &side_1, &side_2, &side_3);
   
   if( side_1 == side_2 && side_2 == side_3) 
   {
      printf("All the sides of this triangle are equal. So, the triangle is equilateral.\n");
   }
   else if( side_1 == side_2 || side_2 == side_3 || side_3 == side_1)
   {  
      printf("Only two sides of this triangle are equal. So, the triangle is isosceles.\n");
   }
   else
   {
      printf("All the sides of this triangle are unequal. So, the triangle is scalene.\n");
   }
   return 0;
}
