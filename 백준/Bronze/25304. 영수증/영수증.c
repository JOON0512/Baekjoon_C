#include <stdio.h>

int main()
{
    int total, things;
    scanf("%d", &total);
    scanf("%d", &things);
    int sum = 0;
    for(int i = 0; i < things; i++){
        int price, num;
        scanf("%d %d", &price, &num);
        sum+=price*num;
    }
    if(total == sum){
        printf("Yes");
    }
    else{
        printf("No");
        
    }
    return 0;
}