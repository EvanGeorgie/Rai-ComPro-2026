#include <stdio.h>
#include <string.h>
int main(){
    int max,size = 4,i;
    struct std{
        char name[100];
        int age;
        float score;
    }std[3];
    for(i = 1;i<=size-1;i++){
        printf("Student %d's name:",i);
        scanf("%s",std[i].name);
        printf("Student %d's age: ",i);
        scanf("%d",&std[i].age);
        printf("Student %d's score:",i);
        scanf("%f",&std[i].score);
    }
    for(i = 0;i<size-1;i++){
        if (std[i].score > std[i+1].score){
                max = std[i+1].score;
                std[i+1].score = std[i].score;
                std[i].score = max;
        }
    
    }
    printf("The highest scores belongs to %s at %.1f scores\n",std[i].name,std[size-1].score);
    return 0;
}