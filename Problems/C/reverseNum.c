#include <stdio.h>

int main(){
    printf("Enter a number : ");
    int num ;
    scanf("%d", &num);
    int last_digit=0, revNum=0;
     while (num >0)
    {

        last_digit = num%10;
        revNum = revNum*10 + last_digit;
        num /= 10;
    }
    printf("%d",revNum);
    return 0;
}