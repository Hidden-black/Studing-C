#include <math.h>
#include <stdio.h>

int main() {

    float a, b, c, s;
    printf("Enter the Three Sides of the Triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2;

    if (a + b > c || b + c > a || c + a > b) {
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of the Triangle is %f\n", area);
    } else {
        printf("Dimentions Are not Of a Triangle\n");
    }
}
