#include <stdio.h>

int sum (int num) {
    // static does what it says, it makes things static to be used in the entire file
    // functions are static by default, but if you define static by the function, it makes it only usable in this file
	static int sum = 0;
    sum += num;

    return sum;
}

int main() {
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));

    return 0;
}