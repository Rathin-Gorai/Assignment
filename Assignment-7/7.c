/* 7. Write a program in C to separate odd and even integers in separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47 */

#include<stdio.h>
int main()
{
    int i,element;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&element);
    printf("Input %d elements in the array :\n",element);
    int array[element];
    for ( i = 0; i < element; i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&array[i]);
    }
    int even[element];
    int odd[element];
    int j=0,k=0;
    for ( i = 0; i < element; i++)
    {
        if (array[i]%2==0)
        {
            even[j]=array[i];
            j++;
             
        }
        else
        {
             odd[k]=array[i];
             k++;
        }
    }
    printf("The Even elements are :");
    for (i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nThe Odd elements are :");
    for ( i = 0; i < k; i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}