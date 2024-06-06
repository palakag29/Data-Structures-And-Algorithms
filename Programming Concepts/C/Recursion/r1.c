#include<stdio.h>

void function2(int n){
    if (n>0){
        printf("%d\n",n);
        function2(n-1);
    }
}

void main(){
    int n=3;
    function2(n);
}