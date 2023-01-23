#include <stdio.h>

int main()
{
    int n;
    int n1 = 0;
    int n2 = 0;
    int arr[30] = {};
    for(int i = 0; i < 28; i++){
        scanf("%d", &n);
        arr[n-1] = 1;
    }
    for(int i = 0; i < 30; i++){
        if(arr[i] == 0){
            if(n1 == 0){
                n1 = i + 1;
            }
            else{
                n2 = i + 1;
            }
        }
    }
    printf("%d\n%d", n1, n2);
    return 0;
}
