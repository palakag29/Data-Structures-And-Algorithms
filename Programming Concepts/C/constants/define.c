#include <stdio.h>
#define PI 3.141589
#define add(x, y) x + y
#define greater(x, y) (x > y) ? printf("%d is greater than %d\n", x, y) : printf("The number %d is not greater than %d\n", x, y)
#define STRING "%s\n"
#define NESO "Welcome to neso!"
int main()
{
    printf("%.4f\n", PI);
    printf("%d\n", add(3, 4));
    printf("%d", greater(77, 10)); 

    printf("DATE : %s\n",__DATE__);

    printf(STRING, NESO);
    return 0;
}
