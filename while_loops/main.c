#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    /* Instructions:
    
        If the current number which is about to printed is less than 5, don't print it.
        If the current number which is about to printed is greater than 10, don't print it and stop the loop.
    
    */
    while (i < 10) {    
        int current = array[i];
        i++;

        if (current < 5) {
            continue;
        }

        if (current > 10) {
            break;
        }

        printf("%d\n", current);
    }

    return 0;
}