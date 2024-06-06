#include<stdio.h>

typedef struct rectangle{
    int length;
    int breadth;
}rect;

int main(){
    rect r1;
    r1.length=20;
    r1.breadth=30;
    printf("Length of rectangle is %d\nBreadth of rectangle is %d\nArea of rectangle is %d",r1.length,r1.breadth,r1.length*r1.breadth);

    int A[5]={1,2,3,4,5};
    int *p;
    p=&A;
    p++;
    printf("\n%d",*p);

    return 0;
}