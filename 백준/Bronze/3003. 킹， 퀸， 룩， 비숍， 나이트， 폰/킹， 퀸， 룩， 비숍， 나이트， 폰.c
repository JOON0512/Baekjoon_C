#include <stdio.h>

int main()
{
    int king, queen, rooks, bishops, knights, pawns;
    scanf("%d %d %d %d %d %d", &king, &queen, &rooks, &bishops, &knights, &pawns);
    printf("%d %d %d %d %d %d", 1 - king, 1 - queen, 2 - rooks, 2 - bishops, 2 - knights, 8 - pawns);    
    return 0;
}