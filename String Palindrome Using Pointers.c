# include <stdio.h>
# include <string.h>

int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';

    int n = strlen(s);
    char *start = s;
    char *end = s + n - 1;
    int palindrome = 1;

    while(start < end){
        if(*start != *end){
            palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(palindrome){
        printf("\"%s\" is a palindrome",s);
    }
    else{
        printf("\"%s\" is not a palindrome",s);
    }
    return 0;


}