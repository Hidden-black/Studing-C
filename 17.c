#include <stdio.h>

int main() {

    int varA;
    printf("%d %p\n", varA, &varA);
    varA++;
    static int varB = 5;

    printf("vara: %d , Loc of varA: %p\n", varA, &varA);
    printf("varB: %d , Loc of varB: %p\n", varB, &varB);
    char test[10] = "ColdWater";
    printf("Test: %s, Loc: %p\n", test, &test);

    register int varC = 20;
    printf("varC: %d , Loc of varC:\n", varC);
    return 0;
}
