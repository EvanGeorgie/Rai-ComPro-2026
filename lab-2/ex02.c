/*Enter total minutes: 75
75 minutes is 1 hour(s) and 15 minute(s)*/

#include <stdio.h>

int main(){
    int time;
    printf("%s","Enter total minutes: ");
    scanf("%d",&time);
    int hour = time/60;
    int minute = time%60;
    printf("%d minutes is %d hours(s) and %d minutes\n",time,hour,minute);
    return 0;
}