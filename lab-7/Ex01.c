#include <stdio.h>
#include <string.h>
int main(){
    struct std{
        char name[100];
        int age;
        float score;
    }
    std[3];
    for(int i = 1;i<=3;i++){
        printf("Student %d's name:",i);
        scanf("%s",std[i].name);
        printf("Student %d's age: ",i);
        scanf("%d",&std[i].age);
        printf("Student %d's score:",i);
        scanf("%f",&std[i].score);
    }
    for(int i = 1;i<=3;i++){
        printf("Student %d name is \"%s\", age %d. score %.2f",i,std[i].name,std[i].age,std[i].score);
        printf("\n");
    }
        return 0;
   
}