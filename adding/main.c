#include <stdio.h>

int main() {
    // we can have a few different types of numbers
    // int, double, floats, longs

    int a = 1;
    double b = 2.5;
    float c = 4.7;
    long d = 27;

    // print our output.
    // expected: 35.2
    // gives: 35.200000. close enough
    printf("Taking a, b, c, and d together gives us %f", a + b + c + d);

    return 0;
}