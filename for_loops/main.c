#include <stdio.h>

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;

    /* calculate the factorial using a for loop here */
    for (int i = 0; i < 10; i++) {
        factorial *= array[i];
    }

    // expected: 3628800
    printf("10! is %d.\n", factorial);
}