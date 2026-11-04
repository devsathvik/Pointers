#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====
int *getlocaladdress(int n){
    int local = n;
    return &local;
}

void check_address(int *ptr);

//===== Declare Local Variables / Functions here if required =====


void check_address(int *ptr) {


    //===== Write Your Logic Here =====
    printf("Dangling Pointer Detected\nUnsafe to Dereference");

}

int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *ptr;

    //===== Write Your Logic Here =====
    ptr = getlocaladdress(N);
    check_address(ptr);

}