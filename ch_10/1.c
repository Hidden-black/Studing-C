#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_num 100

int secretnum;
static int test = 10;
void numgen(void);
void newnum(void);
void readgues(void);

int main(void) {
    char comm;
    printf("Enter a num between 1 and %d. \n\n", max_num);
    numgen();
    do {
        newnum();
        printf("A new number has been chosen.\n");
        readgues();
        printf("Play again? (y/n) ");
        scanf(" %c", &comm);
        printf("\n");
    } while (comm == 'y');

    return 0;
}

void numgen(void) { srand((unsigned)time(NULL)); }
void newnum(void) { secretnum = rand() % max_num + 1; }
void readgues(void) {
    int guess, numgess = 0;
    for (;;) {
        numgess++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess == secretnum) {
            printf("You won in %d guesses!\n\n", numgess);
            return;
        } else if ((guess < secretnum) && secretnum - guess >= 20) {
            printf("Too low\n");
            continue;
        } else if (guess > secretnum && (guess - secretnum >= 20)) {
            printf("Too high\n");
            continue;
        } else if ((guess < secretnum)) {
            printf("Low\n");
            continue;
        } else if (guess > secretnum) {
            printf("High\n");
            continue;
        }
    }
}
