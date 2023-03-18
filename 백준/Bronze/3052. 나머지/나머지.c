#include <stdio.h>

int main()
{
    int check_arr[42] = {};
    int* arr[10];
    int tmp, cnt;
    for(int i = 0; i < 10; i++){
        scanf("%d", &tmp);
        tmp %= 42;
        check_arr[tmp]++;
    }
    cnt = 0;
    for(int i = 0; i < 42; i++){
        if(check_arr[i] != 0)
            cnt++;
    }
    /*for(int i = 0; i < 42; i++){
        printf("%d ", check_arr[i]);
    }*/
    printf("%d", cnt);
    return 0;
}
