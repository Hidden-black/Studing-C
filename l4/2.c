#include <stdio.h>

int main() {

    int array[2][2];

    printf("Enter The value a11 a12: ");
    scanf("%d %d", &array[0][0], &array[0][1]);

    printf("Enter The value a21 a22: ");
    scanf("%d %d", &array[1][0], &array[1][1]);

    int MAX = array[0][0];
    int MIN = array[0][0];
    int Sum;
    float AVG;
    for (int i = 0; i < 2; i++) {
        for (int r = 0; r < 2; r++) {
            if (MAX < array[i][r]) {
                MAX = array[i][r];
            }
            if (MIN > array[i][r]) {
                MIN = array[i][r];
            }

            Sum += array[i][r];
        }
    }
    printf("The Max Value Is %d\n", MAX);

    printf("The Min Value Is %d\n", MIN);

    printf("The SUM Of Value Is %d\n", Sum);
    AVG = (float)Sum / 4;
    printf("The AVG Value Is %f\n", AVG);
    /*
            if(MAX<array[i][r]){
                MAX = array[i][r];
            }
            else{
                i++;
            }
        }
    */
}
