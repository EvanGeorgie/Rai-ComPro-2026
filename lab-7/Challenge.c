#include <stdio.h>
#include <string.h>

struct grade{
    float scoreM;
    float scoreE;
    float scoreS;
    float scoreH;
};

struct Student{
    char name[20];
    char ID[20];
    struct grade g;
};

int main(){
    struct Student info[3];
    float avg[3];
    int i;

    for (i = 0; i < 3; i++){
        printf("Enter name, ID, and 4 grades for student %d: ", i + 1);
        scanf("%s %s %f %f %f %f", info[i].name, info[i].ID,
              &info[i].g.scoreM, &info[i].g.scoreE,
              &info[i].g.scoreS, &info[i].g.scoreH);
    }

    puts("Student Averages:");
    for (i = 0; i < 3; i++){
        avg[i] = (info[i].g.scoreM + info[i].g.scoreE +
                  info[i].g.scoreS + info[i].g.scoreH) / 4.0f;
        printf("%s (ID: %s): %.2f\n", info[i].name, info[i].ID, avg[i]);
    }

    int topIdx = 0;
    for (i = 1; i < 3; i++){
        if (avg[i] > avg[topIdx]) topIdx = i;
    }
    printf("Top Student: %s with %.2f\n", info[topIdx].name, avg[topIdx]);

    puts("Subject Averages:");
    float sumM = 0, sumE = 0, sumS = 0, sumH = 0;
    for (i = 0; i < 3; i++){
        sumM += info[i].g.scoreM;
        sumE += info[i].g.scoreE;
        sumS += info[i].g.scoreS;
        sumH += info[i].g.scoreH;
    }
    float avgM = sumM / 3.0f;
    float avgE = sumE / 3.0f;
    float avgS = sumS / 3.0f;
    float avgH = sumH / 3.0f;

    printf("Math: %.2f\n", avgM);
    printf("English: %.2f\n", avgE);
    printf("Science: %.2f\n", avgS);
    printf("History: %.2f\n", avgH);

    const char *subjects[4] = {"Math", "English", "Science", "History"};
    float savg[4] = {avgM, avgE, avgS, avgH};

    int topSub = 0;
    for (i = 1; i < 4; i++){
        if (savg[i] > savg[topSub]) topSub = i;
    }
    printf("Top Subject: %s with average %.2f\n", subjects[topSub], savg[topSub]);

    return 0;
}