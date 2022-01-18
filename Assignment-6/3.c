/*3.	Write a program in C to check a given number is even or odd using the function. Test Data :
Input any number : 5
Expected Output :
The entered number is odd
*/
#include<stdio.h>
int check(int);
int main()
{
    int a;
    printf("enter the value of number= ");
    scanf("%d",&a);
    check (a);
}

int check(int a)
{
    if 
    (a%2==0)
    {
    printf("The entered number is even");
    }
    else
    {
    printf("The entered number is odd");
    }
}