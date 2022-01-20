#include <stdio.h>

int main() {
    int n = 10;

    /* your code goes here */
    int * pointer_to_n = &n;
    *pointer_to_n += 1;

    // so the above code, pointer_to_n is basically n, and we can modify pointer_to_n and it'll modify n aswell
    printf("n var: %d, pointer_to_n var: %d.\n", n, *pointer_to_n);

    /* testing code */
    if (pointer_to_n != &n) return 1;
    if (*pointer_to_n != 11) return 1;

    printf("Done!\n");
    return 0;
}