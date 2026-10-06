#include <stdio.h>

int main() {

    int i = 1;

    int *ptr;
    ptr = &i;
    printf("%p %p\n", ptr, ptr++);
    printf("%d %d\n", ptr, ptr++);

    float flo;
    float *ptr2 = &flo;
    printf("%p %p\n", ptr2, ptr2++);
    printf("%d %d\n", ptr2, ptr2++);
    double doub;
    printf("%d\n", sizeof(doub));
    double *ptr3 = &doub;
    printf("%p %p\n", ptr3, ptr3++);
    printf("%d %d\n", ptr3, ptr3++);
}
