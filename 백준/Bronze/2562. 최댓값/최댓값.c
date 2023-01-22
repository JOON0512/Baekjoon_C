#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* arr;
    int max = -1;
    int idx;
    arr = (int*)malloc(sizeof(int)*9);
    for(int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            idx = i + 1;
        }
    }
    printf("%d\n%d", max, idx);
    return 0;
}