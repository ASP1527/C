#include <stdio.h>
#include <stdlib.h>

// write the code for the sort() function that sorts an integer array in ascending order
int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int bubble_sort(int x[], int s) {
    int i, j;
    for (i=0; i < s; i++) {
        for (j=0; j < s - i - 1; j++) {
            if (x[j] > x[j+1]) {
                int t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
        }
    }
    return 0;
}

int insertion_sort(int x[], int s) {
    int i, j;
    for (i=1; i < s; i++) {
        for (j=0; j < i; j++) {
            if (x[j] > x[j+1]) {
                int t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
        }
    }
    return 0;
}

int main() {
    int size;
    printf("Size of array: ");
    scanf("%d", &size);
    int x[size];
    /*
    int count = 0;
    while (1 == 1) {
        if (count < size) {
            printf("\nItem: \n");
            scanf("%d", &x[count]);
            count ++;
        } else {
            break;
        }
    }
    */

    int count = 0;
    int choose;
    while (1 == 1) {
        if (count < size) {
            printf("\nItem: \n");
            scanf("%d", &x[count]);
            count ++;
        } else {
            break;
        }
    }

    int i;

    //bubble_sort(x,6); // sort() function sorts the array x in ascending order
    insertion_sort(x,size); // sort() function sorts the array x in ascending order

    printf("The sorted array is as follows:\n");

    for(i=0; i<size; i++){
        printf("%d ",x[i]);
    }
    printf("\n");
    return 0;
}