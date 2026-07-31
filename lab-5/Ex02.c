#include <stdio.h>
int main(){
    int i = 0;
    float count = 0;
    float avg,num;
    while(i<=9){
        i += 1;
        printf("%d.Enter the number: ",i);
        scanf("%f",&num);
        count += num;
    }
    avg = count/10.00;
    printf("total sum is %.0f\n", count);
    printf("Average is %.2f\n", avg);
    return 0;
}