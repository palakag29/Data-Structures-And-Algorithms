#include<stdio.h>
#include <limits.h> //This header file consists of some symbolic constants that are useful in determining the minimum as well as the maximum values of any data type according to the system.

int main(){
    int var1 = INT_MIN;  //INT_MIN and INT_MAX are symbolic constants
    int var2 = INT_MAX;
    printf("The range of signed interger is : %d  to %d\n",var1,var2);

    unsigned int var3 = 0; // UINT_MAX are symbolic constants
    unsigned int var4 = UINT_MAX;
    printf("The range of unsigned interger is : %u  to %u\n", var3, var4); // %d is used to print decimal value, %u is used to print unsigned decimal value.

    short int val1 = SHRT_MIN; // INT_MIN and INT_MAX are symbolic constants
    short int val2 = SHRT_MAX;
    printf("The range of signed interger is : %d  to %d\n", val1, val2);

    unsigned int a = 4294967296, b = 4294967297, c = 4294967298;
    printf("%u %u %u",a,b,c);
    return 0;
}