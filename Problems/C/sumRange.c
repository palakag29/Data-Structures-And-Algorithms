#include<stdio.h>

int main(){
    int low,high;
    printf("Enter range : ");
    scanf("%d %d",&low, &high);

    int sum = 0;
    for (int i = low; i <= high ; i++) {
        sum+=i;
    }
    printf("\n%d",sum);
    return 0;
}