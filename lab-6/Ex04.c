#include <stdio.h>

int main(){
    int i,num[11],ceven = 0,codd = 0;
    for(i = 1 ; i<=10 ; i++){
        printf("Enter value %d: ", i);
        scanf("%d",&num[i]);
    }
    for(i = 1 ; i<=10 ; i++){
        if (num[i]%2 == 0){
            ceven += 1;
        }
        else{
            codd += 1;
        }
    }
    printf("Even numbers: %d\n",ceven);
    printf("Odd numbers: %d\n",codd);
}