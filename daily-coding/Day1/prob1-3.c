// Array in reverse using recursion
#include <stdio.h>
void reverseArray(int arr[],int start,int end){
    int temp;
    if (start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    reverseArray(arr,start+1,end-1);
    }else{return;}
}
void main()
{
    int arr[10];
    int n;
    printf("Enter how many elements to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    reverseArray(arr,0,n-1);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
