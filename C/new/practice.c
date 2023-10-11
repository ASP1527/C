#include <stdio.h>

int compare() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y) {
        printf("X is bigger");
    } else {
        printf("Y is bigger");
    }
    return 0;
}

int countup() {
    int bound;
    printf("Enter a bound: ");
    scanf("%d", &bound);
    int i;
    for (i = 1; i <= bound; i++) {
        printf("%d\n", i);
    }
    return 0;
}

int countdown() {
    int step;
    int bound;
    printf("Enter a bound: ");
    scanf("%d", &bound);
    printf("\nEnter a step: ");
    scanf("%d", &step);
    while (bound >= 0) {
        printf("\n%d", bound);
        bound = bound - step;
    }
}

int arraytot() {
    int nums[] = {1, 2, 3, 4, 5};
    int tot = 0;
    int elements = sizeof(nums) / sizeof(int);
    for (int i = 0; i < elements; i++) {
        tot += nums[i];
    }
    printf("%d", tot);
    return 0;
}

int main() {
    //compare();
    //countup();
    //countdown();
    //arraytot();
    return 0;
}