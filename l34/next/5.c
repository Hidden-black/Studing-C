#include <stdio.h>

int main() {
    int calls;
    float bill = 200.00f;
    printf("Enter The Number Of Calls: ");
    scanf("%d", &calls);

    if (calls > 100) {
        calls -= 100;

        if (calls > 50) {
            calls -= 50;
            bill += 0.60f * 50;

            if (calls > 50) {
                calls -= 50;
                bill += 0.50f * 50;

                if (calls > 0) {
                    bill += calls * 0.40f;
                }
            } else {
                for (; calls > 0; calls--) {
                    bill += 0.50f;
                }
            }
        } else {
            for (; calls > 0; calls--) {
                bill += 0.60f;
            }
        }
    }

    printf("The total bill is %.2f\n", bill);
}
