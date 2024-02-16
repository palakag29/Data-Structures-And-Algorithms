#include<stdio.h>

int main(){
    int x;
    printf("%d\n",sizeof(x)); //Output - 4

    long int c;
    printf("%d\n", sizeof(c)); // Output - 8

    short int d;
    printf("%d\n", sizeof(d)); // Output - 2
}