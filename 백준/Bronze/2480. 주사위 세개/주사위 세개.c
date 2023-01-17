#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(a == b && b == c){
        printf("%d", 10000 + 1000 * a);
    }
    else if(a == b || b == c){
        printf("%d", 1000 + 100 * b);
    }
    else if(a == c){
        printf("%d", 1000 + 100 * c);
    }
    else{
        printf("%d", 100 * max);
    }
    return 0;
}