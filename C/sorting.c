#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// bubble sort
void sort()

int main() {
    int x[]={4,1,4,3,10,5};
    int i;

    sort(x,6); // sort() function sorts the array x in ascending order

    printf("The sorted array is as follows:\n");

    for(i=0; i<6; i++){
        printf("%d ",x[i]);
    }
    printf("\n");
    return 0;
}