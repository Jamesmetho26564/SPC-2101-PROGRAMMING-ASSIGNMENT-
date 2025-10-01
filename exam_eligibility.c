// A program to check student eligibility for final exam 
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
int attendance,average_marks,attendance_percentage;

printf("enter the number of attended sessions\n");
scanf("%d",&attendance);

if(attendance >14 || attendance <0){
printf("invalid input, sessions attendent must be between 0_14\n");
return 1;
}


printf("enter average marks scored\n");
scanf("%d",&average_marks);

attendance_percentage=(attendance * 100 )/14 ;

printf("attendance_percentage is %d%%\n",attendance_percentage);
printf("average_marks is%d%%\n",average_marks);


if(attendance_percentage>=75 && average_marks>=40){
printf("You are eligible for exam");
}else{
printf("Not eligible for exam");}



return 0;
}


    
