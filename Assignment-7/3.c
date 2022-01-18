/* 3. Write a program in C to find the sum of all elements of the array. 
Test Data : 
Input the number of elements to be stored in the array :3 
Input 3 elements in the array : 
element - 0 : 2 
element - 1 : 5 
element - 2 : 8 
Expected Output : 
Sum of all elements stored in the array is : 15*/
#include<stdio.h>
int main()
{
    int i,elements,sum=0;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&elements);
    int number[elements];
    printf("Input %d elements in the array : \n",elements);
    for ( i = 0; i < elements; i++)
    {
        printf("element - %d :",i);
        scanf("%d",&number[i]);
    }
    for ( i = 0; i < elements; i++)
    {
        sum=sum+number[i];
    }
    printf("Sum of all elements stored in the array is :%d",sum);
}
