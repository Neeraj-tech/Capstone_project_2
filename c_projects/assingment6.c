/* sum of first & last digit */
//preprocessor
#include <stdio.h>

//global declarations
//main method
void main(){
int num;
printf("PLease provide 4 digit number: ");
scanf("%d",&num);
printf("Sum of first & last digit: %d \n",num/1000+num%10);
}
//functions
