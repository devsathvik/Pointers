# include <stdio.h>

int sum(int n , int *arr){
    int x = 0;
    int *p = arr;
    for(int i = 0 ; i < n ; i++ ){
        x += *(p + i);
    }
    return x;
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int *p = arr;

    for(int i = 0 ; i < n ; i++ ){
        scanf("%d",p + i);
    }

    int result = sum(n,arr);

    printf("Sum = %d",result);

}