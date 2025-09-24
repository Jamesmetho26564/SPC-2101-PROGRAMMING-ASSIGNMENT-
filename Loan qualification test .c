// A program validating loan  qualification status 
/*
Name: James METHO Kithuka

Registration No:CT101/G/26564/25 
*/
#include<stdio.h>
//main fuction
int main()
{
int age;
printf("enter your age\n");
scanf("%d",&age);
if(age >=21) //age validation

{printf("One more condition to qualify for a loan\n");

//income declaration and validation
int annual_income;
printf("enter your annual_income \n");
scanf("%d",& annual_income);
if(annual_income>=21000)

 //display output 
{printf("congratulations you qualify for a loan");
}else{
printf("unfortunately we are unable to offer you a loan at this time\n");
}
}else{
printf("Unfortunately we are unable to offer you a loan at this time");
}
return 0;

}


    