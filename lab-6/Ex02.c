#include <stdio.h>

int main(){
    int rev[10],i;
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(i = 0; i<9; i++){
        rev[i] = original[8-i];
    }
    printf("%s","Reversed Array: ");
    for(i = 0; i<9; i++){
        printf("%d ",rev[i]);
}
}