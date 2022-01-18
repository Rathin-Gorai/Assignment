/* 4. Write a program in C to copy the elements of one array into another array2
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12 */

#include<stdio.h>
int main()
{
    int i, element1=0, element2=0;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &element1);
    element2=element1;
    int array1[element1],array2[element2];
    printf("Input %d elements in the array :\n",element1);
    for ( i = 0; i < element1; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array1[i]);
    }
    printf("The elements stored in the first array are :\n");
    for ( i = 0; i < element1; i++)
    {
        printf("%d ",array1[i]);
    }
    for ( i = 0; i < element1; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nThe elements copied into the second array are :\n");
    for (i = 0; i < element2 ; i++)
    {
    printf("%d ",array2[i]);
    }
}