#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *arr;

    arr = (int*)calloc(N, sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    //===== Write Your Logic Here =====
    if(N == 1){
        for(int i = 0 ; i < N ; i++){
        printf("%d",*(arr + i));
            if(i < N - 1){
                printf(" ");
            }
        }
        printf("\n\n");

        printf("Output Format:\nPrint all N values in the zero-initialized buffer, space-separated, on a single line.\nSince calloc() initializes to zero, the output will always be:\n0 0 0 ... 0 (N times)");
    
    }
    else{for(int i = 0 ; i < N ; i++){
        printf("%d",*(arr + i));
            if(i < N - 1){
                printf(" ");
            }
        }
    }
    

    //===== Declare Local Variables / Functions here if required =====


    free(arr);
    return 0;
}