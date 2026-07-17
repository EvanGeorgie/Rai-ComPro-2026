/*Please enter an integer value: 43
You entered 43
Please enter a float value: 41.9
You entered 41.9
Please enter a character: a
You entered a*/

#include <stdio.h>

int main(){
    int integer;
    float flo;
    char character;
    printf("%s", "Please enter an integer value: ");
    scanf("%d", &integer);
    printf("%s", "Please enter an float value: ");
    scanf("%f", &flo);
    printf("%s", "Please enter an character value: ");
    scanf(" %c", &character);
    printf("You entered %d\n",integer);
    printf("You entered %.2f\n",flo);
    printf("You entered %c\n",character);
    return 0;
}