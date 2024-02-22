#include <stdio.h>

int fun();
int var  = 10;

int main(){

    int var = 4;
    {
        int var = 3;
        printf("%d\n",var); //prints 3 because it is the closest one to scope of search

    }
    printf("%d\n",var)   ;// prints 4, this is the value of the outer variable
    fun();
    return 0;
}

int fun (){
    printf("%d",var); //this will print 10, as there is no local "var" so it will search for the nearest one in the scope of the function
    
}