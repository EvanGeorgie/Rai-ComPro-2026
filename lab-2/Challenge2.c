// Enter integer #1: 4$
// Enter integer #2: -1$
// Enter integer #3: 10$
// $
// Results:$
// Minimum: -1$
// Maximum: 10$
// Sum: 13$
// Average: 4.33$

#include <stdio.h>

int main(){
    int i1,i2,i3;
    float mi,ma;
    printf("%s","Enter integer #1: ");
    scanf("%d",&i1);
    printf("%s","Enter integer #2: ");
    scanf("%d",&i2);
    printf("%s","Enter integer #3: ");
    scanf("%d",&i3);

    if(i1 < i2 && i2 < i3){
        mi = i1;
        ma = i3;
    }
    else if(i2 < i1 && i1 < i3){
        mi = i2;
        ma = i3;
    }
    else if(i3 < i1 && i1 < i2){
        mi = i3;
        ma = i2;
    }

    float add = i1+i2+i3;
    float avg = add/3;
    printf("%s","Results:\n");
    printf("Minimum: %.0f\n",mi);
    printf("Maximum: %.0f\n",ma);
    printf("sum: %.0f\n",add);
    printf("Average: %.2f\n",avg);
    return 0;
}