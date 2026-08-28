// x1: 2.3
// y1: 1.5
// x2: 0
// y2: 4
// Distance between (2.3, 1.5) and (0, 4) is 3.396 unit(s)

#include <stdio.h>
#include <string.h>
#include<math.h>
int main(){
    int max,size = 3,i;
    float d;
    struct vec{
        float x;
        float y;
    }vec[2];
    for(i = 0;i<size-1;i++){
        printf("x%d: ",i+1);
        scanf("%f",&vec[i].x);
        printf("y%d: ",i+1);
        scanf("%f",&vec[i].y);      
    }
    d = sqrt(pow((vec[1].x-vec[0].x),2)+pow((vec[1].y-vec[0].y),2));
    printf("Distance between (%.1f,%.1f) and (%.0f,%.0f) is %.3f unit(s)",vec[0].x,vec[0].y,vec[1].x,vec[1].y,d);
}