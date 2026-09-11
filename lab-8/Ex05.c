#include <stdio.h>
int main(){
    int size = 6,count = 0;
    int array[] = {3, 1, 2, 4, 5, 6};
    int* ptr = array;
    for(int i = 0;i<size;i++){
        if(*(ptr+i) % 2 == 0){
            count += (*(ptr+i));
        }
        else{
            count += 0;
        }
    }
    printf("The sum of even numbers is: %d",count);
}