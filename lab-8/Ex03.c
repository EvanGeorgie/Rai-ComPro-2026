#include <stdio.h>
int main() {
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int *ptr = array;
    int size = 6;  //sizeof(array) / sizeof(array[0]);
    for(int i = 0; i<size; i++){
        if (*(ptr+i) > *(ptr+i+1)){
            int temp = *(ptr+i+1);
            *(ptr+i+1) = *(ptr+i);
            *(ptr+i) = temp;
    }
}
    printf("Max value: %d\n",*(ptr+size));
    printf("Min value: %d\n",*ptr);
 }