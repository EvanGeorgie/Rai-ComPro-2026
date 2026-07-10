#include <stdio.h>

int main(){
    printf("+----------------+----------------+\n");
    printf("%-16s %-8s\n","|Name","| score1 | score2|");
    printf("+----------------+----------------+\n");
    printf("%-16s %-8s\n","|Alice","|     85 |     90|");
    printf("%-16s %-8s\n","|Bob","|     78 |     82|");
    printf("%-16s %-8s\n","|Charlie","|     92 |     88|");
    printf("+----------------+----------------+\n");
    return 0;
}