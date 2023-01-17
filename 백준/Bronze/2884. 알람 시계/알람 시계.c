#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
    int fH, fM;
    if(M - 45 >= 0){
        fH = H;
        fM = M - 45;
    }
    else{
        if(H - 1 >= 0){
            fH = H - 1;
            fM = M + 15;
        }
        else{
            fH = 23 - H;
            fM = M + 15;
        }
    }
    printf("%d %d", fH, fM);
    return 0;
}
