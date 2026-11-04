#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void exchangeValues(int* ptrA, int* ptrB) {

    //===== Declare Local Variables / Functions here if required =====
    *ptrA = *ptrA + *ptrB;
    *ptrB = *ptrA - *ptrB;
    *ptrA = *ptrA - *ptrB;

    //===== Write Your Logic Here =====


}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    //===== Declare Local Variables / Functions here if required =====


    exchangeValues(&A, &B);

    printf("After Swapping:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    return 0;
}