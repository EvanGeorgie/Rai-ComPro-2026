#include <stdio.h>
int main(){
    int i;
    float count = 0;
    float avg,num;
    for(i = 1; i<=10; i++){
        printf("%d.Enter the number: ",i);
        scanf("%f",&num);
        count += num;
    }
    avg = count/10.00;
    printf("total sum is %.0f\n", count);
    printf("Average is %.2f\n", avg);
    return 0;
}