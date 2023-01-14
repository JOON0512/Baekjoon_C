#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == b)
        printf("==");
    else{
        char* c = a > b ? ">" : "<";
        printf("%s", c);
    }
    return 0;
}