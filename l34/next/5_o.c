#include <stdio.h>

#define CLAMP(x, lo, hi) ((x) < (lo) ? (lo) : (x) > (hi) ? (hi) : (x))

int main(void)
{
    int calls;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    int tier1 = CLAMP(calls - 100, 0, 50);   // calls 101–150 @ 0.60
    int tier2 = CLAMP(calls - 150, 0, 50);   // calls 151–200 @ 0.50
    int tier3 = calls > 200 ? calls - 200 : 0; // calls 200+ @ 0.40

    float bill = 200.00f + tier1 * 0.60f + tier2 * 0.50f + tier3 * 0.40f;

    printf("The total bill is %.2f\n", bill);
    return 0;
}
