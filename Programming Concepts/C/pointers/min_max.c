#include <stdio.h>

void calcMinMax(int a[],int len, int *min, int *max){

    *min = *max = a[0];
    int i = 0;
    while(i < len){
        if (a[i]>*max){
            *max=a[i];
        }else if(a[i]<*min){
            *min=a[i];
        }
        i++;
        }
    }

int main(){

    int a[] = {3,4,12,466,3,23,223,2,1};
    int min,max;
    int len = sizeof(a)/sizeof(a[0]);
    // printf("%d",len);
    calcMinMax(a,len,&min,&max);

    printf("Minimum value is %d \nMaximum value is %d",min,max);
    return 0 ;
}