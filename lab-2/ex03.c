/*Enter your Name: Jane
Enter your Age: 20
Enter your height: 160.8
Enter your weight: 60
Enter your gender: F
Enter your Education Qualification: High School
Name: Jane
Age: 20
Gender: F
Height: 160.8
Weight: 60
Education: High School*/

#include <stdio.h>

int main(){
    char name[20];
    int age;
    float height;
    int weight;
    char gender[1];
    char Education_Qualification[20];
    printf("%s","Enter your Name: ");
    scanf("%s",name);
    printf("%s","Enter your Age: ");
    scanf("%d",&age);
    printf("%s","Enter your height: ");
    scanf("%f",&height);
    printf("%s","Enter your weight: ");
    scanf("%d",&weight);
    printf("%s","Enter your gender: ");
    scanf(" %c",gender);
    printf("%s","Enter your Education Qualification: ");
    scanf(" %[^\n]",Education_Qualification);

    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("height: %.2f\n",height);
    printf("weight: %d\n",weight);
    printf("gender: %c\n",gender[0]);
    printf("Education Qualification: %s\n",Education_Qualification);
    return 0;
}