# include <stdio.h>

void swap(long long * x , long long * y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);

    swap(&a,&b);

    printf("Call by Value: No change in main\nCall by Reference: Swapped successfully\nAfter swap: a = %lld, b = %lld",a,b);


}