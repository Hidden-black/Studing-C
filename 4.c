#include <stdio.h>

#define f_point 32.0f
#define multiply (5.0f/9.0f)

int main(void)
{
    float faren, cels;


    printf("----Fahrenheit To Celsius----\n");
    printf("Enter Temp in Fahrenheit: ");
    scanf("%f", &faren);

    cels = (faren - f_point)*multiply;

    printf("Temp in Celsius: %.1f\n", cels);
    return 0;
}