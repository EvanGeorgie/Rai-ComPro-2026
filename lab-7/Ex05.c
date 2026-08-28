// Time input (m:s): 1:09
// Time input (m:s): 1:00
// Time input (m:s): 1:00
// Total time elasped: 189 second(s)

#include <stdio.h>
#include <string.h>
#include<math.h>
int main(){
    struct time{
        int m;
        int s;
    }time[3];
    int size = 3,i,count = 0,sec;

    for(i = 0;i<size;i++){
        printf("%s","Time input (m:s): ");
        scanf("%d:%d", &time[i].m , &time[i].s);
    }
    for(i = 0;i<size;i++){
        sec = time[i].m * 60;
        count += (sec+time[i].s);
    }
    printf("Total time elasped: %d second(s)",count);
}