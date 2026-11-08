#include <stdio.h>
#include <stdbool.h>

bool championshipWinner(int n) {
    //===== Write Your Logic Here =====
    return n % 2 == 0;

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", championshipWinner(n) ? "true" : "false");
    return 0;
}