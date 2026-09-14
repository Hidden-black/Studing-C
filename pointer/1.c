#include <stdio.h>

int main() {
    int var = 10, *p = &var;

    int age = 22, *ptr = &age, _age = *ptr;
    printf("%p\n", &var);
    printf("%d\n", *p);
    printf("%d\n", *p);
    printf("%p %d %d %p\n", &age, *ptr, _age, &_age);
    printf("%p\n", p);

    int x = 10;
    int *ptrw = &x;
    printf("Val x:%d\n", *ptrw);
    *ptrw = 20;
    printf("val c:%d\n", *ptrw);
}
