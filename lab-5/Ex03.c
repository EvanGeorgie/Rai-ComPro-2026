#include <stdio.h>
int main()
{
    int i,mod;
    while(i != 0){
        printf("%s", "Enter the number: ");
        scanf("%d",&i);
        mod = i%2;
        if(mod == 0 && i != 0){
            printf("%d is even\n",i);
        }
        else if(mod != 0){
            printf("%d is odd\n",i);
        }
        else if (i == 0){
            printf("Exiting Program... Bye");
        }
    }
    return 0;
}
