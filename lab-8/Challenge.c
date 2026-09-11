// Enter 5 integers: 3 1 5 2 4
// Sorted descending: 5 4 3 2 1
#include <stdio.h>

int main(){
    int size = 5, array[5],i;
    printf("Enter %d integers: ",size);
    scanf("%d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4]);

    int *ptr = array;
    for(i = 0 ; i < size-1 ; i++){
        for(int j = 0 ; j < size-1 ; j++){
            if (*(ptr+j) < *(ptr+j+1)){
                int temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
    }
}
}
    printf("%s","Sorted descending: ");
    for(int i = 0 ;i < size ;i++){
        printf("%d ",*(ptr+i));
    }
}