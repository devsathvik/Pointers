#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int*)malloc(N * sizeof(int));
    if(arr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    //===== Write Your Logic Here =====
    printf("Memory Leak Demonstrated\nAllocated Memory Not Freed");

}