/* 5. Write a program in C to merge two arrays of same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in descending order is :
3 3 2 2 1 1 */


#include<stdio.h>
int main()
{
   int i,j,element1,element2,element3,temp;
   printf("Input the number of elements to be stored in the first array : ");                   //input 1
   scanf("%d",&element1);
   int array[element1];
   printf("Input %d elements in the array :\n",element1);
   for ( i = 0; i < element1; i++)
   {
      printf("element - %d : ",i);
      scanf("%d",&array[i]);
   }
   
   for(i=0;i<element1;i++ )
   {
      printf("%d ",array[i]);
   }

   printf("\nInput the number of elements to be stored in the second array : ");
   scanf("%d",&element2);
   printf("Input %d elements in the array :\n",element2);
   int array1[element2];
   for ( int j = 0; j < element2; j++)                                                              //input 2
   {
      printf("element - %d : ",j);
      scanf("%d",&array1[j]);
   }

 for(j=0;j<element2;j++ )
   {
      printf("%d ",array1[j]);
   }

   element3=element1+element2;
   int array2[element3];
   for ( j = 0,i=0; j < element1; j++)                                                             //marge
   {
      array2[j]=array[i]; 
      i++;
   }
  
   for ( j = 0, i=element1; j < element2; j++)
   {
      array2[i]=array1[j];
      i++;
   }

   printf("\nThe merged array");                                                                  //output
   for ( i = 0; i < element3; i++)
   {
      printf(" %d",array2[i]);
   }
   int n=element3;
   // sorting
     for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (array2[i] < array2[j]) 
               {
                temp = array2[i];
                array2[i] = array2[j];
                array2[j] = temp;
                }
        }
    }

    printf("\nArray elements after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
    return 0;
}