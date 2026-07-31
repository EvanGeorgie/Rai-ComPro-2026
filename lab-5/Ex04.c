#include <stdio.h>
int main()
{
    int i = 0,num,mul;
    printf("%s","Enter a number: ");
    scanf("%d",&num);
    printf("Multiplication Table for %d:\n",num);
    while(i<12){
        i += 1;
        mul = num * i;
        printf("%d x %d = %d\n", num,i,mul);
    }
    return 0;
}
