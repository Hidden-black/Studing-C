#include <stdio.h>

struct Student {
    int rollNo;
    char name[30];
    int marks[3];
};

int main() {

    struct Student value[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter rollNo: ");
        scanf("%d", &value[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", value[i].name);
        printf("Enter 3 Marks: ");
        scanf("%d %d %d", &value[i].marks[0], &value[i].marks[1],
              &value[i].marks[2]);
        printf("\n\n");
    };
    printf("\n\n\n");

    printf("RollNo       Name         TotalSalary\n");
    for (int i = 0; i < 5; i++) {
        printf("%d    %s    %d\n", value[i].rollNo, value[i].name,
               value[i].marks[0] + value[i].marks[1] + value[i].marks[2]);
    };
}
