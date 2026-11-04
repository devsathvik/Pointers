#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);
    int *arr = (int*)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
    int I, J;
    scanf("%d %d", &I, &J);

    //===== Declare Local Variables / Functions here if required =====
    int *a = &arr[I];
    int *b = &arr[J];

    printf("Difference = %d",b - a);

    //===== Write Your Logic Here =====


}