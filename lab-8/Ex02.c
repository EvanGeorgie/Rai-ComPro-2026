#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int* Pa = &a;
    int* Pb = &b;
    int* Pc = &c;
    printf("Before reverse: a = %d, b = %d, c = %d\n",a,b,c);
    int temp1 = *Pa;
    *Pa = *Pb;
    *Pb = temp1;
    int temp2 = *Pb;
    *Pb = *Pc;
    *Pc = temp2;
    printf("After reverse: a = %d, b = %d, c = %d\n",*Pa,*Pb,*Pc);
}