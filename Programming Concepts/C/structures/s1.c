#include <stdio.h>

struct rect{
    int length;
    int breadth;
};
void main(){

    struct rect r1={10,5};
    printf("%d\n", r1.length);

    int x =5, *ptr=&x;
    printf("%d\n",*ptr);

    *ptr = 10;
    printf("%d",*ptr);

    int  q ;
    q = *ptr;
    printf("%d",q);

}