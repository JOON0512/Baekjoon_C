#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int* arr;
    arr = (int*) malloc (sizeof(int) * N);
    
    for(int a = 0; a < M; a++){
        int i, j, k;
        scanf("%d", &i);
        scanf("%d", &j);
        scanf("%d", &k);
        for(int b = i-1; b <= j-1; b++){
            arr[b] = k;
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}