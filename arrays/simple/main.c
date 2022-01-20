#include <stdio.h>

int main() {
    // array that holds three elements
    int grades[3];

    // our average
    int average;

    // define our grades
    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    // should return 85
    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}