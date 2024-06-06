#include <stdio.h>
#include <stdlib.h>
struct  rect
{
    int len;
    int bre;
};
int main(){
    struct rect *p;

    p=(struct rect*)malloc(sizeof(struct rect));
    p->len=10;
    p->bre=20;
    printf("%d",p->bre);
}
