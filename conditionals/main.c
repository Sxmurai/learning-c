#include <stdio.h>

void guessNumber(int guess) {
    int correct = 555; // according to the website, this is the correct guess

    printf("Guessing for number %d\n", guess);

    if (guess == correct) {
        printf("Correct. You guessed it!\n");
    } else if (guess < correct) {
        printf("Your guess is too low.\n");
    } else if (guess > correct) {
        printf("Your guess is too high.\n");
    }

    printf("\n");
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

    return 0;
}