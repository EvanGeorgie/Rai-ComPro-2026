#include <stdio.h>

int main(){
    int i,mark[5],count = 0,max;
    for(i = 1; i<=5;i++){
        printf("Enter the marks of students %d: ", i);
        scanf("%d",&mark[i]);
    }
    for(i = 1; i<=5; i++){
            count += mark[i];
    }
    for(i = 0; i<=5; i++){
            if (mark[i] > mark[i+1]){
                max = mark[i+1];
                mark[i+1] = mark[i];
                mark[i] = max;
    }
 }
    printf("Total Marks : %d\n",count);
    printf("Highest Marks : %d\n",mark[5]);
}