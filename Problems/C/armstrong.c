#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    int count = 0;
    int q = n;
    while(q!=0){
        count++;
        q=q/10;
    }
    printf("%d\n",count);
    
    q = n;
    int cnt = count,result=0;

    int rem = 0;
    while(q!=0){
        rem = q%10;
        int mul = 1;
        while(cnt!=0){
            mul *=rem;
            cnt--;
        }
        result +=mul;
        q /= 10;
        cnt = count;
        mul =1;

    }
    // printf("%d",result);
    if(result ==n){
        printf("%d = %d , it is armstrong number", result, n );
    }else{
        printf("%d != %d , it is not a armstrong number", result, n );
    }
}