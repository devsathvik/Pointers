#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int*)malloc(N * sizeof(int));
    int *ptr = arr;

    for(int i = 0; i < N; i++) {
        scanf("%d", ptr + i);
    }

    int sum = 0;

    //===== Write Your Logic Here =====
    for(int i = 0; i < N ; i++ ){
        sum += *(ptr + i);
    }

    printf("Sum = %d",sum);

    free(arr);

    arr = NULL;

}