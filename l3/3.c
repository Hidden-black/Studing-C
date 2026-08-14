#include <stdio.h>

struct Stu {
    int rollno;
    char name[30];
    float marks[3];
};

int main() {

    struct Stu a[3] = {{1, "SudentA", {60, 70, 80}},
                       {2, "SudentB", {90, 88, 74}},
                       {3, "StudentC", {99, 94, 95}}};

    float percent[4];

    for (int i = 0; i < 3; i++) {
        percent[i] = (a[i].marks[0] + a[i].marks[1] + a[i].marks[2]) / 3;
        printf("Rollno: %d   Name: %s   Percent: %f\n", a[i].rollno, a[i].name,
               percent[i]);
    };
    printf("\n");
}
