#include <stdio.h>
#include <stdlib.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main() {
    int *a, *b;
    int c, d;
    c = 5;
    d = 10;
    a = &c;
    b = &d;
    printf("%d\n%d\n", *a, *b);
    swap(a, b);
    printf("%d\n%d\n", *a, *b);
    return 0;
}