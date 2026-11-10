# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int *p = arr;

    for(int i = 0 ; i < n ; i++ ){
        scanf("%d",p + i);
    }

    for(int i = 0 ; i < n ; i++ ){
        printf("Element %d: %d\n",i,*(p + i));
    }
}