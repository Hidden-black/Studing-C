#include <stdio.h>

struct Student {
    int RollNo;
    char Name[30];
    int Marks[5];
};

int main() {

    struct Student value[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the RollNo: ");
        scanf("%d", &value[i].RollNo);

        printf("Enter the Name: ");
        scanf("%s", value[i].Name);

        printf("Enter English Marks: ");
        scanf("%d", &value[i].Marks[0]);

        printf("Enter Physics Marks: ");
        scanf("%d", &value[i].Marks[1]);

        printf("Enter Maths Marks: ");
        scanf("%d", &value[i].Marks[2]);
    }

    for (int i = 0; i < 3; i++) {

        printf("RollNo: %d    Name: %s   English: %d    Physics: %d     Maths: "
               "%d    TotalMarks: %d\n",
               value[i].RollNo, value[i].Name, value[i].Marks[0],
               value[i].Marks[1], value[i].Marks[2],
               value[i].Marks[0] + value[i].Marks[1] + value[i].Marks[2]);
    }
}
