#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int a1, a2, a3, b1, b2, b3;
    b1 = b % 10;
    b2 = b % 100 / 10;
    b3 = b / 100;
    printf("%d\n", a*b1);
    printf("%d\n", a*b2);
    printf("%d\n", a*b3);
    printf("%d\n", a*b1 + 10*a*b2 + 100*a*b3);
    return 0;
}