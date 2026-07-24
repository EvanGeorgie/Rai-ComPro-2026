#include <stdio.h>

int main(){
    float R,h;
    printf("%s","Enter cone height: ");
    scanf("%f",&h);
    printf("%s","Enter cone base radius: ");
    scanf("%f",&R);
    float V = (1.0/3)*(3.14)*(R*R)*h;
    if (V > 260){
        printf("%s","This cone is perfect for Supun project");
    }
    else{
        printf("%s","This cone is not fit for this project");
    }
    return 0;
}