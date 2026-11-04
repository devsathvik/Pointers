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


    int even_count = 0;
    int odd_count = 0;

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < N ; i++ ){
        if(*(ptr + i) % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }

    printf("Even = %d\nOdd = %d",even_count,odd_count);

}