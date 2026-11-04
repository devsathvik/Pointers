#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int*)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
    int K;
    scanf("%d", &K);
    int index_val;
    int pointer_val;


    //===== Write Your Logic Here =====
    printf("Using Indexing = %d\n",arr[K]);
    printf("Using Pointer = %d\n",*(arr + K));
    index_val = arr[K];
    pointer_val = *(arr + K);
    if(index_val == pointer_val){
        printf("Equal = YES");
    }
    else{
        printf("Equal = NO");
    }

}