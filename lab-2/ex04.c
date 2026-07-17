// Enter your Name: M
// Enter your student ID: 6300000
// Enter your Programming score: 4
// Enter your Physics score: 3.0
// Enter your Calculus score: 2.5
// Hi M(6300000)! Your GPA is 3.17

#include <stdio.h>

int main(){
    char name[20];
    char ID[9];
    float PRS;
    float PYS;
    float CS;
    printf("%s","Enter your Name: ");
    scanf(" %[^\n]",name);
    printf("%s","Enter your Student ID: ");
    scanf("%s",ID);
    printf("%s","Enter your Programming score: ");
    scanf("%f",&PRS);
    printf("%s","Enter your Physics score: ");
    scanf("%f",&PYS);
    printf("%s","Enter your Calculus score: ");
    scanf("%f",&CS);

    float GPA = (PRS+PYS+CS)/3;
    printf("Hi %s(%s)! Your GPA is %.2f\n", name, ID, GPA);
    return 0;
}