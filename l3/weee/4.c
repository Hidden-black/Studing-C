#include <stdio.h>

struct Employee {
    int empid;
    char name[30];
    int basicsalary;
    int bonus;
};

int main() {

    struct Employee value[5];
    for (int i = 0; i < 5; i++) {

        printf("\n------VALUE %d------\n", i + 1);
        printf("Enter Empid: ");
        scanf("%d", &value[i].empid);
        printf("Enter Name: ");
        scanf("%s", value[i].name);
        printf("Salary: ");
        scanf("%d", &value[i].basicsalary);
        printf("Bonus: ");
        scanf("%d", &value[i].bonus);
    };

    printf("\n\n_________________________\n\n");
    for (int i = 0; i < 5; i++) {
        int totalsalary = value[i].basicsalary + value[i].bonus;
        printf("Empid: %d   EmpName:  %s   TotalSalary: %d\n", value[i].empid,
               value[i].name, totalsalary);
    }
    return 0;
}
