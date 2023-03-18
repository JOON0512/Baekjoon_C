#include <stdio.h>

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
        for(int b = i - 1; b <= j - 1; b++){
            if(b + 1 <= (i + j)/2){
                tmp = arr[b];//b=0
                arr[b] = arr[i+j-b-2];//i=1, j=2
                arr[i+j-b-2] = tmp;
                //printf("changed!\n");
            }
        }
    }
    for(int a = 0; a < N; a++){
        printf("%d ", arr[a]);
    }
    return 0;
}