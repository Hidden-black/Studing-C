#include <stdio.h>


int main(){

    int num,a,b,c,d,add;
    printf("Enter a 4 Digit Number: ");
    scanf("%d",&num);

    a= (num/1000)%10;
    b= (num/100)%10;
    c= (num/10)%10;
    d= (num)%10;
    
    add= a+b+c+d;

    printf("%d %d %d %d",a,b,c,d)
    printf("Sum of All Digits: %d",&add);
    return 0;
}
