#include <stdio.h>
#include<stdlib.h>
// include  the library containing the function to be  tested
#include "./add.c"
int add(int,int);
// extern int count;
int main(){
    int value=0;
    value = increment();
    value = increment();
    value = increment();

    printf("%d\n",value);
    int sums = add(33,4);
    printf("%d",sums);
    return 0;
}