// Array in reverse using Pointer

#include<stdio.h>

void main(){
    int arr[10];
    int start;
    int end;
    int n;
    printf("Enter how many elements to enter: ");
    scanf("%d",&n);
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    start=0;
    end=n-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start] = arr[end];
        arr[end]=temp;   
        start++;
        end--;
                
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
