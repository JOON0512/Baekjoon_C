#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i, j, tmp;
    int* arr;
    scanf("%d %d", &N, &M);
    arr = (int*) malloc(sizeof(int)*N);
    for(int a = 0; a < N; a++){
        arr[a] = a + 1;
    }
    for(int a = 0; a < M; a++){
        scanf("%d %d", &i, &j);
        tmp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = tmp;
    }
    for(int a = 0; a < N; a++){
        printf("%d ", arr[a]);
    }
    return 0;
}