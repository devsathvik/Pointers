#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);
    int *arr = (int*)malloc(N * sizeof(int));
    int *ptr = arr;
    for(int i = 0; i < N; i++) scanf("%d", ptr + i);

    //===== Declare Local Variables / Functions here if required =====


    int max;
    if (N > 0) {
        max = *arr;
    }

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < N ; i++ ){
        if(*(ptr + i) > max){
            max = *(ptr + i);
        }
    }

    printf("Maximum = %d",max);

}