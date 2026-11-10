# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int *p = arr;

    for(int i = 0 ; i < n ; i++ ){
        scanf("%d",p + i);
    }

    for(int i = n - 1 ; i >= 0 ; i-- ){
        printf("%d",*(p + i));
        if(i > 0){
            printf(" ");
        }
    }
}