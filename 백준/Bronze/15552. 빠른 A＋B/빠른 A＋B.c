#include <stdio.h>

int main()
{
    int T, x, y;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %d", &x, &y);
        printf("%d\n", x + y);
    }
    return 0;
}