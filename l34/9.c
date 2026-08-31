#include <stdio.h>

int main(void) {

    char choice;

    scanf("%s", &choice);

    switch (choice) {
    case 'A' ... 'Z':
    case 'a' ... 'z':
        printf("The entered number is a Alphabet\n");
        break;

    case '0' ... '9':
        printf("Digit\n");
    }
}
