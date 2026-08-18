#include <stdio.h>

struct Stu {
    int rollno;
    char name[30];
    float marks[3];
};

int main() {

    struct Stu value[3]; // = {{1, "SudentA", {60, 70, 80}},
                         //  {2, "SudentB", {90, 88, 74}},
                         //  {3, "StudentC", {99, 94, 95}}};

    float percent[4];

    for (int i = 0; i < 3; i++) {
        printf("Enter The RollNo.: ");
        scanf("%d", &value[i].rollno);

        printf("Enter The Name: ");
        scanf("%s", value[i].name);

        printf("Enter The Subject 1 Marks: ");
        scanf("%f", &value[i].marks[0]);

        printf("Enter The Subject 2 Marks: ");
        scanf("%f", &value[i].marks[1]);

        printf("Enter The Subject 3 Marks: ");
        scanf("%f", &value[i].marks[2]);

        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        percent[i] =
            (value[i].marks[0] + value[i].marks[1] + value[i].marks[2]) / 3;
        printf("Rollno: %d   Name: %s   Percent: %2f\n", value[i].rollno,
               value[i].name, percent[i]);
    };
    printf("\n");
}
