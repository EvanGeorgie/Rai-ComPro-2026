#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    bool range;
    bool even;
    printf("%s","Enter a number: ");
    scanf("%d", &num);
    range = (num >= 1 && num <=100);
    even = (num%2 == 0);
    switch(range){
        case true : 
            switch(even){
                case true: printf("%d is even",num);
                break;
                case false: printf("%d is odd",num);
                break;
            }
            break;
        case false :
            printf("%d is out of range",num);
            break;
    }
    return 0;
}