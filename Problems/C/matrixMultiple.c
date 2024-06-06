#include<stdio.h>
#define MAX 10
int main(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows,brows,acol,bcol;
    printf("Enter the rows and coloums of Matrix A : ");
    scanf("%d %d",&arows,&acol);

    for(int i = 0;i<arows;i++){
        for(int j = 0; j<acol;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and coloums of Matrix B : ");
    scanf("%d %d",&brows,&bcol);
    if (brows != acol)
    {
        printf("Matrix multiplication cannot be done.");
    }else{
        for (int i = 0; i < brows; i++)
        {
            for (int j = 0; j < bcol; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }
    printf("\n");
    int sum = 0;
    printf("Resultant Matrix : \n");
    for (int i = 0; i < arows; i++){
        for (int j = 0;  j < bcol; j++){
            for (int k = 0;  k < acol ;k++ ){
                sum += a[i][k] * b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            printf(" %d ", product[i][j]);
        }}

    return 0;
}