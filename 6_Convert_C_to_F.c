#include <stdio.h>

#define f_point 32.0f
#define multiply (9.0f/5.0f)

int main(void)
{
    float faren, cels;


    printf("---- Celsius To Fahrenheit ----\n");
    printf("Enter Temp in Celsius: ");
    scanf("%f", &cels);

    faren = (cels*multiply)+f_point;

    printf("Temp in Fahren: %.1f\n", faren);
    return 0;
}
