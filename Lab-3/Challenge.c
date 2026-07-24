#include <stdio.h>

int main(){
    float cal,phy,com,GPA,Ncgrade,Npgrade,Ncograde;
    char cgrade,pgrade,cograde;

    printf("%s","Calculus score: ");
    scanf("%f",&cal);
    printf("%s","Physic score: ");
    scanf("%f",&phy);
    printf("%s","compro score: ");
    scanf("%f",&com);

    if (cal <= 100.00 && cal >= 0.00){
        if(cal >= 80.00){
            cgrade = 'A';
            Ncgrade = 4.0;
        }
        else if(cal >= 70.00 && cal < 80.00){
            cgrade = 'B';
            Ncgrade = 3.0;
        }
        else if(cal >= 60.00 && cal < 70.00){
            cgrade = 'C';
            Ncgrade = 2.0;
        }
        else if(cal >= 50.00 && cal < 60.00){
            cgrade = 'D';
            Ncgrade = 1.0;
        }
        else if(cal < 50.00){
            cgrade = 'F';
            Ncgrade = 0.0;
        }
        
    }
    if (phy <= 100.00 && phy >= 0.00){
        if(phy >= 80.00){
            pgrade = 'A';
            Npgrade = 4.0;
        }
        else if(phy >= 70.00 && phy < 80.00){
            pgrade = 'B';
            Npgrade = 3.0;
        }
        else if(phy >= 60.00 && phy < 70.00){
            pgrade = 'C';
            Npgrade = 2.0;
        }
        else if(phy >= 50.00 && phy < 60.00){
            pgrade = 'D';
            Npgrade = 1.0;
        }
        else if(phy < 50.00){
            pgrade = 'F';
            Npgrade = 0.0;
        }
        
    }
    if (com <= 100.00 && com >= 0.00){
        if(com >= 80.00){
            cograde = 'A';
            Ncograde = 4.0;
        }
        else if(com >= 70.00 && com < 80.00){
            cograde = 'B';
            Ncograde = 3.0;
        }
        else if(com >= 60.00 && com < 70.00){
            cograde = 'C';
            Ncograde = 2.0;
        }
        else if(com >= 50.00 && com < 60.00){
            cograde = 'D';
            Ncograde = 1.0;
        }
        else if(com < 50.00){
            cograde = 'F';
            Ncograde = 0.0;
        }
    }
    else{
        puts("Error Na ja");
    }
    GPA = (Ncgrade+Npgrade+Ncograde)/3;
    printf("%s\n","Subject     Score     Grade     Grade");
    printf("%s\n","--------------------------------------");
    printf("Cal %11.0f %8c %11.1f\n",cal,cgrade,Ncgrade); 
    printf("Physics %7.0f %8c %11.1f\n",phy,pgrade,Npgrade);
    printf("compro %9.0f %7c %11.1f\n",com,cograde,Ncograde);
    printf("GPA = %.1f",GPA);
}