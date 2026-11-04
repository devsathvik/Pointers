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
        printf("Memory allocation failed\n");
        return 1;
    }

    //===== Write Your Logic Here =====
    for(int i = 0; i < N ; i++){
        scanf("%d",(arr + i));
    }

    for(int i = 0; i < N ; i++){
        printf("%d",*(arr + i));
        if(i < N - 1){
            printf(" ");
        }
    }

    printf("\n");

    free(arr);

    arr = NULL;

}