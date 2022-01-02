/*                        */
/* Opening a bank account */
/*                        */

#include<stdio.h>

int main(){
    char bank_name[100];
    int begin_account, mid_account, final_account;

    printf("[Bank List]\n");
    printf("Woori, IBK, KBStar, Nonghyup\n\n");
    printf("Choose Bank Name: ");
    scanf("%s", bank_name);

    printf("\nInput Bank Account(you want)\n");
    printf("Input Begin Number: ");
    scanf("%d", &begin_account);
    printf("Input Mid Number: ");
    scanf("%d", &mid_account);
    printf("Input Final Number: ");
    scanf("%d", &final_account);

    printf("\n[Your Bank Account Information]\n");
    printf("Bank: %s\n", bank_name);
    printf("Account: %d-%d-%d\n", begin_account, mid_account, final_account);

return 0;
}
