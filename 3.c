#include <stdio.h>

int main(void)
{
    int lenght, height, breadth, weight, volume;

    printf("Length: ");
    scanf("%d",&lenght);

    printf("Breadth: ");
    scanf("%d", &breadth);

    printf("Height: ");
    scanf("%d", &height);


    volume = lenght*breadth*height;
    weight = (volume+165)/166;

    printf("Volume (cubic cm): %d\n", volume);
    printf("Weight: %d\n", weight);
}