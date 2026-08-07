#include <stdio.h>

int main(){
    int v[12],i;
    for(i = 1 ; i <= 10 ; i++){
        printf("Enter the value %d here: ",i);
        scanf("%d",&v[i]);
    }
    printf("Values in array are: ");
    for(i = 1 ; i <= 10 ; i++){
        printf("%d" , v[i]);
        if(i < 10){
            printf(",");
        }
    }
}