#include <stdio.h>

int main(void)
{
    int height, weight, length, breadth, volume;
    height = 10;
    length = 12;
    breadth = 8;

    volume = height*length*breadth;

    weight = (volume+165)/166;
    printf("Dimentions: %dx%dx%d\n",height,breadth, length);
    printf("Volume (cubic in): %d\n", volume);
    printf("Dimentional Weight: %d\n", weight);

    return 0;
}