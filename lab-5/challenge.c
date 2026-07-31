#include <stdio.h>

int main(void){
    int mode,wd,dp,left;
    while(mode != 4){
            printf("%s\n","====== ATM MENU ======");
            printf("%s\n","1. Check Balance");
            printf("%s\n","2. Deposit Money");
            printf("%s\n","3. Withdraw Money");
            printf("%s\n","4. Exit");
            printf("%s","Choose an option: ");
            scanf("%d",&mode);
            if(mode == 2){
                printf("%s","Enter amount to deposit: ");
                scanf("%d",&dp);
                puts(" ");
            }
            else if(mode == 3){
                printf("%s","Enter amount to withdraw: ");
                scanf("%d",&wd);
                left = dp-wd;
                puts(" ");
                puts(" ");
            }
            else if(mode == 1){
                printf("Current Balance: %d\n",left);
                puts(" ");
            }  
    }
    puts("Thank you for using the ATM.");
}