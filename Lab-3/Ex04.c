#include <stdio.h>

int main(){
    char name[20];
    float calsc,physc,scsc,avg;
    char grade;
    printf("%s","enter your name: ");
    scanf("%s",name);
    printf("%s","Enter your Calculus score: ");
    scanf("%f",&calsc);
    printf("%s","Enter your Physic score: ");
    scanf("%f",&physc);
    printf("%s","Enter your Science score: ");
    scanf("%f",&scsc);
    avg = (calsc+physc+scsc)/3;

    if (avg < 50){
        grade = 'F';
    }
    else if (avg >= 50 && avg < 60){
        grade = 'D';
    }
    else if (avg >= 60 && avg < 70){
        grade = 'C';
    }
    else if (avg >= 70 && avg < 80){
        grade = 'B';
    }
    else if (avg >= 80){
        grade = 'A';
    }
    printf("%s, your average is %.2f. You got grade %c",name,avg,grade);
    return 0;
}