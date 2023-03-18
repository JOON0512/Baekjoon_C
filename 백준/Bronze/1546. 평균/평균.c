#include <stdio.h>
#include <stdlib.h>


int main()
{
    //init
    int N;
    int max = 0;
    float sum = 0;
    float* scores;
    
    //input score & find max
    scanf("%d", &N);
    scores = (float*) malloc(sizeof(float)*N);
    for(int i = 0; i < N; i++){
        scanf("%f", &scores[i]);
        if(max < scores[i])
            max = scores[i];
    }
    //printf("%d\n", max);
    
    //new mean value
    for(int i = 0; i < N; i++){
        scores[i] = scores[i] / max * 100;
        //printf("SCORE : %f\n", scores[i]);
        sum += scores[i];
        //printf("SUM : %f\n", sum);
        
    }
    //printf("%d\n", sum);
    printf("%f", (float)sum / (float)N);
    return 0;
}
