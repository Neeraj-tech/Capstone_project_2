/* 
Documentation
Question: The distance between two cities(in KM) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters.
Here we are declaring global variables but in advanced level we will be using structure to return values.
*/
//Preprocessor
#include <stdio.h>

//Global Declaration
int convert(int km);
float feet,inches;
int meter;
long cm;
//Main Method
void main(){
int x = 0;
printf("Please Provide distamce between cities in Km: ");
scanf("%d",&x);
convert(x);
//printf("%ld /n",cm);
printf("Hello distance between cities in feet is %f ,Meter is %d ,Inches is %f ,Centimeter is %ld .\n",feet,meter,inches,cm);
}

//Functions
int convert(int km){
feet=km*3280.84;
meter = km*1000;
inches = feet*12;
cm=km*100000;
return feet,meter,inches,cm;
}
