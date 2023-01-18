#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int x, y;
    int* arr;
    scanf("%d", &T);
    arr = (int*)malloc(sizeof(int)*T);
    for(int i = 0; i < T; i++){
        scanf("%d %d", &x, &y);
        arr[i] = x + y;
    }
    for(int i = 0; i < T; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}