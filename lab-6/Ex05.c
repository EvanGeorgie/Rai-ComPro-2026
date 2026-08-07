#include <stdio.h>

int main(){
    int i,num[11],max,size = 10;
    for(i = 1 ; i<11 ; i++){
        printf("Enter value %d: ", i);
        scanf("%d",&num[i]);
    }
    for(i = 0; i<=10; i++){
            if (num[i] > num[i+1]){
                max = num[i+1];
                num[i+1] = num[i];
                num[i] = max;
        }
    }
    printf("Largest number: %d\n",num[size]);
    printf("Smallest number: %d\n",num[0]);
}