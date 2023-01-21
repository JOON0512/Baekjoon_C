#include <stdio.h>

int main()
{
    int N, tmp, n, l, r;
    int cycle = 0;
    scanf("%d", &N);
    if(N < 10){
        N *= 10;
    }
    int answer = N;
    do { // answer = 26
        //printf("starting n: %d\n", n);
        l = N % 10;// 6
        //printf("%d\n", l);
        tmp = N / 10 + N % 10;// 2+6 = 8
        r = tmp % 10;// 8
        N = 10*l + r;// n = 68
        //printf("N: %d\n", N);
        cycle++;
    }
    while(N != answer && N >= 0 && N < 100);
    printf("%d", cycle);
    return 0;
}