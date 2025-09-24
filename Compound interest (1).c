//  A program computing compound_interest (CI)

/*
Name:James Metho Kithuka
Registration number :CT101/G/26564/25
*/
#include<stdio.h>
#include<math.h>
//main function 
int main()
{
//variable declaration 
float A,P,t,r,CI;
int n;


//prompt user to enter principal amount 
printf("enter principal amount");
scanf("%f", &P);

//prompt the user to enter age
printf("enter rate\n");
scanf("%f",&r);

//prompt user to enter time
printf("enter time");
scanf("%f",&t);

//prompt user to enter compounding years
printf("Enter compounding years");
scanf("%d",&n);

//main formulae
r=r/100;
A=P*pow((1+r/n),n*t);
CI=A-P;
//print  results 
printf("Total Amount,%.2f\n",A);

printf("Principal,%.2f\n",P);

printf("compound_interest is Ksh.%.2f",CI);

return 0;
}



    