#include <stdio.h>

int main(){
    int num;
    printf("%s","Enter a number: ");
    scanf("%d", &num);
    if (num >= 1 && num <=100){
        if(num%2 == 0){
            printf("%d is even",num);
        }
        else if (num%2 != 0){
            printf("%d is odd",num);
        }
        else{
            puts("Error");
        }
    }
    else{
        printf("%d is out of range\n",num);
    }
    return 0;
}