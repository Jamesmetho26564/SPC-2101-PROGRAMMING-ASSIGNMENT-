// A program to calculate total water bill
/*
Name: James METHO 
Registration No:CT101/G/26564/25
Date:30/09/2025

*/

#include<stdio.h>;

// main function
int main() 
{
//variable declaration
int water_units;
float Total_bill;

printf("enter the number of water units\n");
scanf("%d",& water_units);

if(water_units>=0 && water_units <=30){

Total_bill=(water_units*20);

}else if(water_units>=31 && water_units <=60){
Total_bill=(water_units*25);

}else{
 Total_bill=(water_units*30);
 }
 printf("water_units:%.2d\n",water_units);
 printf("Total_bill: %.2f Ksh",Total_bill);

return 0;
}



    
    