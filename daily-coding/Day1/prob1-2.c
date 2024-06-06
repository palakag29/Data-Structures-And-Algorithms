// Array in reverse using another array

#include <stdio.h>

void main(){

    int n;
    printf("How many elements in array : ");
    scanf("%d",&n);
    int arr[10];
    for (int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ", arr[i]);
    }
        printf("\nReversed Array : ");
    int rev[10];
    for (int i=0;i<n;i++){
        rev[i]=arr[n-1-i];
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", rev[i]);
    }
}