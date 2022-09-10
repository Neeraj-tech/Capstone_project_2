/* sum of digits using Recurssion */
//Preprocessor
#include <stdio.h>

//global declarations
int rec(int num);
//main method
void main(){
int num;
printf("Number: ");
scanf("%d",&num);
printf("Sum of digit %d\n",rec(num));
}
int rec(int num){
int sum = num%10;
if(num/10>0){
sum += rec(num/10);
}
return sum;
}
