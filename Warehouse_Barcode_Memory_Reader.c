#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);
    int *arr = (int*)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) scanf("%d", (arr + i));

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    for(int i = 0 ; i < N ; i++){
        printf("%d",*(arr + i));
        if(i < N - 1){
            printf(" ");
        }
    }

}