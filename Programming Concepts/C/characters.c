#include<stdio.h>

int main(){

    char c = 126;
    printf ("%d -> %c\n",c, c);
    printf("%d", printf("%s","Hello World"));
    printf("%10s\n","Hello");

    signed i ;
    i = 10;
    char cc = 255;
    cc = cc+10;
    printf("%d",cc);

//Practice Question
    int var = 75;
    int var2 = 56;
    int num;
    num = sizeof(var)?(var2>23 ?((var==75)?'A':0):0):0;
    printf("\nNum: %d\n",num);

    int p = (3,4,8);
    printf("\n%d",p);

    int q= 3;
    int vaar = sizeof(q++);
    printf("\n%d %d", q,sizeof(q++));
    return 0 ;

}