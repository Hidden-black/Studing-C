#include <stdio.h>

#define hra 2.0f / 10.0f
#define da 1.0f / 10.0f

struct Employee {
    int Empid;
    char name[30];
    float basicSalary;
};

int main() {
    struct Employee values[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter Employee ID: ");
        scanf("%d", &values[i].Empid);

        printf("Enter Employee Name: ");
        scanf("%s", values[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &values[i].basicSalary);
    }

    printf("\n\n\n");
    for (int i = 0; i < 5; i++) {
        float totalsalary = values[i].basicSalary +
                            (values[i].basicSalary * hra) +
                            (values[i].basicSalary * da);
        printf("Id: %d    Name: %s   Totalsalary: %.2f\n", values[i].Empid,
               values[i].name, totalsalary);
    }
}
