#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int fact = 1;
    int i;
    for (i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    printf("%d",factorial(5));
    return 0;
}