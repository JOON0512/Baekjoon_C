#include <stdio.h>

int main()
{
    int T, x, y;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d %d", &x, &y);
        printf("Case #%d: %d\n", i, x + y);
    }

    return 0;
}