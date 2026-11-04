#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int *arr = NULL;

    arr = (int*)malloc(N * sizeof(int));
    if(arr == NULL){
        printf("Memory Allocation failed\n");
        free(arr);
        return 1;
    }

    for(int i = 0 ; i < N ; i++){
        scanf("%d",arr + i);
    }

    free(arr);

    arr = NULL;

    printf("Memory Allocated Successfully\nMemory Freed Successfully\nPointer Reset to NULL");
    return 0;
}