#include <stdio.h>
// include  the library containing the function to be  tested
#include "./add.c"

// extern int count;
int main(){
    int value;
    value = increment();
    value = increment();
    value = increment();

    printf("%d",value);
    return 0;
}