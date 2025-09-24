// Cyndrical surface area and volume 
/*
Name: James METHO 
Registration No:CT101/G/26564/25
Date:23/09/2025
volume=PI*radius*radius*height (cm³)
 surface_area =(2*PI*radius*radius)+(2*PI*radius*height) (cm²)
*/

#include<stdio.h>;
// main function
int main()
{
//variable declaration
float volume,surface_area;
const double PI=3.142;// constant 

//prompt user to enter height 
float height;
printf("enter height (in centimeters )\n");
scanf("%f",& height); 
 
 //prompt user to enter the radius 
float radius;
printf("enter radius (in Centimeters)\n");
scanf("%f",& radius);

//compute Volume and surface_area of the cylinder
volume =PI*radius*radius*height;
surface_area=(2*PI*radius*radius)+(2*PI*radius*height);

//results display 
printf("volume is:%.2f cm³\n",volume);
 printf("surface_area is:%.2f cm²",surface_area);

return 0;
}


    
