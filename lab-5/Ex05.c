#include <stdio.h>

int main(void){
    int i = 0,num, total = 1;
    printf("%s","Enter a number: ");
    scanf("%d",&num);
    while(i<num){
        i += 1;
        total *= i;
    }
    printf("Factorial of %d is %d",i,total);
}