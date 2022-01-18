/*4.	Write a program in C to show the sum, subtract, multiplication of two number using function.*/
#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mult(int,int);
int main()
{
int number1,number2;
printf("Enter the value of two number(one by one): ");
scanf("%d %d",&number1,&number2);
sum(number1,number2);
sub(number1,number2);
mult(number1,number2);
}

int sum(int number1, int number2)
{
    float sum;
    sum=number1+number2;
    printf("\n Sum of the numbers= %.2f",sum);
}

int sub(int number1,int number2)
{
    float sub;
    sub=number1-number2;
    printf("\n Substraction of two numbers= %.2f",sub);
}

int mult(int number1,int number2)
{
    float mult;
    mult=number1*number2;
    printf("\n Multiplication value of two numbers= %.2f",mult);
}