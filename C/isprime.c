#include <stdio.h>

int *isPrime;

void prime(int n) {
    int factors = 0;
    int i;
    int num;
    for (i=1; i<n; i++) {
        if (n % i == 0) {
            factors ++;
        }
    }
    if (factors == 1) {
        num = 1;
    } else {
        num = -1;
    }
    isPrime = &num;
}

int main() {
    int n;
    scanf("%d", &n);
    prime(n);
    if (*isPrime == 1) {
        printf("Prime");
    } else {
        printf("Not prime");
    }
    return 0;
}