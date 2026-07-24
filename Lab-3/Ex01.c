#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter a number: ");
    scanf("%d",&num2);
    if (num1 == num2){
        puts("Match");
    }
    else if(num1 != num2){
        puts("Does not match. Try again");
    }
    else{
        puts("error");
    }
    return 0;
}