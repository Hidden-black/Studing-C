#include <stdio.h>
#define pi (22.0f/7.0f)

int main(void)
{

    float radius,facto, volume,volume2;

    printf("Enter the Radius: ");
    scanf("%f",&radius);

    printf("%f\n",radius);
    volume = pi * radius * radius * radius * (4.0f / 3.0f);
    volume2 = 3.14f * radius * radius * radius * (4.0f / 3.0f);

    printf("Volume of the the Sphere: %f\n", volume);
    printf("Volume2 of the the Sphere: %f\n", volume2);


    return 0;
}