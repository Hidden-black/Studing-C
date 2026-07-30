#include <stdio.h>
 
int main(){
    
    int num = 1000000;

    while(num >= 1){
        num -= 1;
        printf("%d\n",num);
    }

    return 0;
}