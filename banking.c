// Online C compiler to run C program online
#include <stdio.h>

int main() {
   while(1){ 
    
    int score;
    

    printf("select operation\n1.check balance\n2.deposite Money\n3.withdraw money\n4.exit");
    int op;
    scanf("%d",&op);
    int balance=1000,amount,w_a;
    
 
    switch(op) {
        case 1:
            printf("balance amount:%d\n",balance);
            break;
        case 2:
            printf("enter money to deposite:\n");
            scanf("%d",&amount);
            printf("amount is sucessfully deposited and your current balnace is:%d\n",balance+amount);
            break;
        case 3:
            printf("enter withdrawl:\n");
            scanf("%d",&w_a);
            if(balance<w_a){
                printf("insufficient balnce");
            }
            else{
            printf("amount is withdrawed and your cuurent balnce is:%d\n",balance-w_a);
            }
            break;
        case 4:
            printf("exited\n");
            break;
        default:
            printf("choose correct option\n");
    }
    if(op==4){
        break;
    }
   }

    return 0;
}
