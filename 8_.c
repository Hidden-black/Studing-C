#include <stdio.h>


int main(){

    int num,count;
    printf("Enter the value: ");
    scanf("%d", &num);

    printf("Num %d\n", num);


    for (; num>= 100; num -= 100){
        count++;
    }

    printf("Coins: %d\n100bills: %d\n,", num, count);


    while (num>=100){
        num -=100;
        count++;
    }


    return 0;
}