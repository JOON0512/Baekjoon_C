#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N, X, tmp;
    scanf("%d %d", &N, &X);
    int* arr1;
    int* arr2;
    int n = 0;
    arr1 = (int*)malloc(sizeof(int)*N);
    arr2 = (int*)malloc(sizeof(int)*N);
    //arr2 = (int*)malloc(sizeof(int)*N);
    for(int i = 0; i < N; i++){
        scanf("%d", &tmp);
        arr1[i] = tmp;
    }
    for(int i = 0; i < N; i++){
        if(arr1[i] < X){
            arr2[n] = arr1[i];
            n++;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}
