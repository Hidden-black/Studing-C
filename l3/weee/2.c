#include <stdio.h>
typedef signed int rectangle;
struct Student {
    char name;
    int rollno;
};
enum level { low, medium, high };

int main() {

    int A[5] = {1, 2, 3, 4};
    char Array[10] = "WATER";

    printf("%s\n\n", &Array[4]);

    // struct Student a; a.name="A";a.rollno=2;

    enum level l;
    l = medium;
    printf("%d\n\n\n\n", l);

    int b = 0;
    for (b = 0; b < 6; b++) {
        printf("%d\n", A[b]);
    }
}
