#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N, n, cnt;
    cnt = 0;
     scanf("%d", &N);
    int* arr;
    arr = (int*)malloc(sizeof(int)*N);
    for(int i = 0; i < N; i++){
        scanf("%d", &n);
        arr[i] = n;
    }
    int V;
    scanf("%d", &V);
    for(int i = 0; i < N; i++){
        if(arr[i] == V)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
