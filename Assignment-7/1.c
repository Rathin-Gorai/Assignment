/*1. Write a program in C to store elements in an array and print it. 
Test Data: Input 10 elements in the Array: 
element - 0 : 1 
element - 1 : 1 
element - 2 : 2 
....... 
Expected Output: 
Elements in array are: 1 1 2 3 4 5 6 7 8 9 */
#include<stdio.h>
int main()
{  
  int number[10];
  int i;

  for (i=0;i<10;i++)
  {
    printf(" element - %d  : ",i);
    scanf("%d",&number[i]);
    
  }
  printf("Elements in arrays are");
  for ( i = 0; i < 10; i++)
  {
     printf(" %d",number[i]);
  }
}