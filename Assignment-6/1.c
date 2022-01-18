/*1.Write a program in C to find the square of any number using the function.

Test Data :
Input any number for square : 20
Expected Output :

The square of 20 is : 400.00  */

#include<stdio.h>
int squre(int);
int main()
{
    int a;
    float b;
    printf("Input any number for square: ");
    scanf("%d", &a);
    squre(a);
    b=squre(a);
    printf("\n The square of %d is: %.2f",a,b);
}
int squre(int a)
{
    return a*a;
}