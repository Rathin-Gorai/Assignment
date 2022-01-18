/* 9. Write a program in C for addition of two Matrices of same size.
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 14
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
1 2
3 4
The Second matrix is :
5 6
7 8
The Addition of two matrix is :
6 8
10 12 */
#include<stdio.h>
int main()
{
    int a;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d",&a);
    int arr[a][a],arr2[a][a];
    printf("Input elements in the first matrix :\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Input elements in the second matrix :\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }  
    printf("The First matrix is : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Second matrix is :\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d  ",arr2[i][j]);
        }
        printf("\n");
    }
    int arrsum[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            arrsum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    printf("The Addition of two matrix is :\n");
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d  ",arrsum[i][j]);
        }
        printf("\n");
    }
    return 0;    
}
    