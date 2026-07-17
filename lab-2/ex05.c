// Enter your full name: Poom Konghuyrob
// Enter your age: 19
// Enter your heght: 160.5
// Enter you University name: KMITL
// Hi! Everyone. This is K.Poom from KMITL. I am 19 years old
// and my height is
// 160.5 cm tall.

# include <stdio.h>

int main(){
    char name[20];
    char fname[20];
    char lname[20];
    int age;
    float height;
    char UN[20];
    printf("%s","Enter your full name: ");
    scanf("%s %s", fname, lname);
    printf("%s","Enter your age: ");
    scanf("%d", &age);
    printf("%s","Enter your height: ");
    scanf("%f", &height);
    printf("%s","Enter your University name: ");
    scanf("%s", UN);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old\n", lname[0], fname, UN, age);
    printf("%s","and my height is\n");
    printf("%.2f cm tall.", height);
}