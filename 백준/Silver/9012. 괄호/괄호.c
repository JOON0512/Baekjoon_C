#include <stdio.h>

int is_valid(char * input){
    int left = 0;
    char* cursor = input;

    while(*cursor != '\0'){
        if(*cursor == '('){
            left++;
        }
        else{
            left--;
        }
        if(left <0){
            return 0;
        }
        cursor++;
    }

    if(left == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int iter;
    char input[51];
    
    scanf("%d\n", &iter);

    while(iter--){
        scanf("%s", input);
        is_valid(input) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}