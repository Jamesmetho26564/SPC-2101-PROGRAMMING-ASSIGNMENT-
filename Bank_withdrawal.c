//A program using while loop for a customer bank withdrawal 
/*
Name:METHO JAMES KITHUKA 
Reg no:CT101/G/26564/25
*/

#include <stdio.h>

int main() {
    int balance =1000; 
    int amount;
    
    printf("Your current balance is Ksh%d \n", balance);
    
    while (balance >0) 
    { printf("Enter the amount to withdraw \nKsh");
scanf("%d", &amount); if (amount <= balance) 
//calculating the balance after withdrawal 
{
balance = balance - amount;
printf("New Balance: = Ksh%d \n", balance);
} 
else
printf("Insufficient balance\n");}


return 0;
}