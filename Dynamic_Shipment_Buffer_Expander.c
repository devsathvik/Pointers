#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int*)malloc(N * sizeof(int));
    if(arr == NULL) { printf("Allocation failed\n"); return 1; }
    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
    int M;
    scanf("%d", &M);

    //===== Write Your Logic Here =====
    int *temp = (int*)realloc(arr, (N + M) * sizeof(int));
    if(temp == NULL){
        printf("Reallocation Failed\n");
        free(arr);
        return 1;
    }
    arr = temp;
    for(int i = N ; i < N + M; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < N + M; i++){
        printf("%d",arr[i]);
        if(i < N + M - 1){
            printf(" ");
        }
    }

}