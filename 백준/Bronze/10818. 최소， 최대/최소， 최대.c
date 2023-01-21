#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N;
    int* arr;
    int min = 1000000;
    int max = -1000000;
    scanf("%d", &N);
    arr = (int*)malloc(sizeof(int)*N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; i++){
        if(arr[i] <= min){
            min = arr[i];
        }
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}