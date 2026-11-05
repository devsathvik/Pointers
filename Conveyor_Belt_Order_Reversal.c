#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);
    int *arr = (int*)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) scanf("%d", arr + i);

    //===== Declare Local Variables / Functions here if required =====


    int *left = arr;
    int *right = arr + N - 1;

    //===== Write Your Logic Here =====
    while(left < right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    for(int i = 0 ; i < N ; i++){
        printf("%d",*(arr + i));
        if(i < N - 1){
            printf(" ");
        }
    }

}