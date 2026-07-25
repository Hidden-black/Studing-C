#include <stdio.h>

#define f_point 32.0f
#define multiply (9.0f/5.0f)

int main(void)
{
    float faren, cels;


    printf("---- Celsius To Fahrenheit ----\n");
    printf("Enter Temp in Celsius: ");
    scanf("%f", &faren);

    cels = (faren*multiply)+f_point;

    printf("Temp in Fharen: %.1f\n", cels);
    return 0;
}