#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void inspectMemory(int reading) {

    //===== Declare Local Variables / Functions here if required =====
    int *p = &reading;
    printf("Value = %d\n",reading);
    printf("Address = %p",*p);

    //===== Write Your Logic Here =====


}

int main() {
    int reading;
    scanf("%d", &reading);

    //===== Declare Local Variables / Functions here if required =====
    inspectMemory(reading);

    //===== Write Your Logic Here =====


}