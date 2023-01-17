#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    int M = B + C;
    int n = 0;
    while(M >= 60){
        M -= 60;
        n++;
    }
    if(A + n >= 24)
        printf("%d %d", A + n - 24, M);
    else
        printf("%d %d", A + n, M);
    return 0;
}