#include<stdio.h>

void main(){
    printf("Enter a string : ");

    int n;
    scanf("%d",&n);

    printf("String is %d",n);

    int temp = n;
    int result = 0;
    while (temp!=0){
       int rem = temp%10;
        result = (result*10)+rem;
        temp=temp/10;
    }
    if(n==result){
        printf("\nPalindrome");
    }else{
        printf("\nNot Palindrome");

    }
    }


