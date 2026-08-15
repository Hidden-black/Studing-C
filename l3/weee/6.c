#include <stdio.h>

int main() {

    int a = 5, b = 11;

    a = a ^ b;
    printf("a= %d %p ,b= %d\n %p", a, &a, b, &b);
    b = a ^ b;
    printf("a= %d %p ,b= %d\n %p", a, &a, b, &b);
    a = a ^ b;
    printf("a= %d %p ,b= %d\n %p", a, &a, b, &b);

    printf("a= %d %p ,b= %d\n %p", a >> 3, &a, b << 3, &b);
    printf("a= %d %p ,b= %d\n %p", a >> 2, &a, b << 2, &b);
}
