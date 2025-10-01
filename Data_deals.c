/*
Name:METHO JAMES KITHUKA
Reg no:CT101/G/26564/25
date:1/10/2025
Description:A program showing data deals
*/
#include<stdio.h>
int main(){ 
int choice; 
printf("1. 100MB @KES.50\n");
printf("2. 500MB @KES.200\n");
printf("3. 1GB  @KES.350\n");
printf("4. 2GB  @KES.600\n");


printf(" ENTER YOUR CHOICE\n");
scanf("%d",& choice);
switch (choice){

case 1:
printf("YOU ENTERED 100MB @KES.50\n");
break;

case 2:
printf("YOU ENTERED 500MB @KES.200\n");
break;

case 3:
printf("YOU ENTERED 1GB @KES.350\n");
break;

case 4:
printf("YOU ENTERED 2GB @KES.600");
break;

default: 
printf("!!INVALID CHOICE");
}
return 0;
}




    
    
