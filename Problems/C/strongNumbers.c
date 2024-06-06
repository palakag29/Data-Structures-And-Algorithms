// A strong number is a number if the sun of factorial of individual digits of a number is equal to the number"

#include<stdio.h>
int fact(int n)
{
    int fact = 1;
    while (n != 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}
int main() {
    int result=0 ,num, rem;
    scanf("%d", &num);
    int q = num ;
    while(q!=0){
        rem= q%10;
        result += fact(rem);
        q /=10;
    }

    printf("\n%d",result);
    if (result == num)
        printf(" \n%d is a strong number.", num);
    else{
        printf(" \n%d is not a strong number.", num);

    }
    
}

