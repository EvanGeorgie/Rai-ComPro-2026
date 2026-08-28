#include <stdio.h>
#include <string.h>
#include<math.h>
int main(){
    int max,size = 3,i;
    float X,Y;
    struct vector{
        float x;
        float y;
    }vector[4];
    printf("%s","u_x: ");
    scanf("%f",&vector[1].x);
    printf("%s","u_y: ");
    scanf("%f",&vector[1].y);
    printf("%s","v_x: ");
    scanf("%f",&vector[2].x);
    printf("%s","v_y: ");
    scanf("%f",&vector[2].y);         
    X = vector[1].x+vector[2].x;
    Y = vector[1].y+vector[2].y;
    printf("Resultant vector is equvalence to %.1fi + %.1fj",X,Y);
}