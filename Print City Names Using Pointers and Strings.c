# include <stdio.h>
# include <string.h>

int main(){
    int n;
    scanf("%d",&n);

    int c;
    while((c = getchar()) != '\n' && c != EOF);

    char cities[100][100];

    for(int i = 0 ; i < n ; i++ ){
        fgets(cities[i] , sizeof(cities[i]) , stdin);
        cities[i][strcspn(cities[i] , "\r\n")] = '\0';
    }

    printf("City Names:\n");
    for(int i = 0 ; i < n ; i++ ){
        char *p = cities[i];
        printf("%s\n",p);
    }
}