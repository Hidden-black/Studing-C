#include <stdio.h>
#define fpoint 32.0f
#define multi (9.0f / 5.0f)

int main() {
    float fahren, cels;

    printf("Enter the temp in Cels:");
    scanf("%f", &cels);

    fahren = cels * multi + fpoint;

    printf("Temperate is %f *F\n", fahren);
    return 0;
}
