/* 6. Write a program in C to find the maximum and minimum element in an array.
Test Data: 
Input the number of elements to be stored in the Array: 3
Input 3 elements in the Array: 
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21 */

#include<stdio.h>

int main()
{
    int element, Max, Min,i;
    printf("Input the umber of element t be stored in the Array: ");
    scanf("%d",&element);
    printf("Input %d elements in the Array:\n",element);
    int array[element];
    for ( i = 0; i < element; i++)
    {
        printf("element - %d : ",i);
        scanf ("%d",&array[i]);
    }
    Min=array[0];
    Max=array[0];
    
   for(i=1; i<element; i++)
    {
        if(array[i]>Max)
        {
            Max = array[i];
        }
        if(array[i]<Min)
        {
            Min = array[i];
        }
    }
    printf("Maximum element is :%d",Max);
    printf("\nMinimum element is :%d",Min);
}