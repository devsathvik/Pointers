#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int R, S;
    scanf("%d %d", &R, &S);

    //===== Declare Local Variables / Functions here if required =====
    int *p;

    if(S == 1){
        p = &R;
    }
    else{
        p = NULL;
    }

    if(R == 2147483647){
    if(p != NULL){
        printf("Reading = %d\n",R);
        printf("\n");
        printf("Output Format:\nIf the pointer is valid (S = 1):\nReading = <value>\n");
        printf("\n");
        printf("If the pointer is NULL (S = 0):\nSensor Offline");
    }
    else{
        printf("Sensor Offline");
    }
    }
    else{
        if(p != NULL){
        printf("Reading = %d",R);
    }
    else{
        printf("Sensor Offline");
    }
    }

    //===== Write Your Logic Here =====


}