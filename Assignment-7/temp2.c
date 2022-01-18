#include <stdio.h>
#define MAX 100

int main()
{
    int arr[4] = {19, 10, 8, 17, 9};
    
    int n, i, j;
    int temp;
    n = 4;
    
    //sort array
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nArray elements after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}