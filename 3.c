#include <stdio.h>
#define inch_per_pound 166

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
    weight = (volume+inch_per_pound-1) / inch_per_pound;

    printf("Volume (cubic cm): %d\n", volume);
    printf("Weight: %d\n", weight);

    return 0;
}