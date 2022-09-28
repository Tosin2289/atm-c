#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("================ATM MACHINE ================\n");
    printf("1- Withdrawal\n2-Deposit\n3-Check balance\n");
    int num;
    scanf("%d",&num);
    if(num==1){
        printf("Input your name :\n");
        char nam;
        scanf("%s",&nam);
        printf("Enter amount to be Withdrawals :\n");
        int dep;
        scanf("%d",&dep);
        printf("please wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\n Withdrawal completed complete");

    }
    if(num==2){
        printf("Input your name :\n");
        char nam;
        scanf("%s",&nam);
        printf("Enter amount to be deposited :\n");
        int dep;
        scanf("%d",&dep);
        printf("please wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\n Deposit completed complete");
    }
    if(num==3){
        printf("Input your name :\n");
        char name;
        scanf("%s",&name);
        printf("Enter account number :\n");
        int acct;
        scanf("%d",&acct);
        printf("please wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\nplease wait while your transaction is in progress.....\n You currently do not have any money in the bank pls shutdown your account\nand move to another bank");

    }
    return 0;
}
