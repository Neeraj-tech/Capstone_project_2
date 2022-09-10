/*factorial of number*/
//preprocessor
#include <stdio.h>
//global declarations
//main method
void main(){
int num;
int factorial=1;
printf("Please Provide a number for factorial: ");
scanf("%d",&num);
for(int x=1;x<=num;x++){
factorial *=x;
}
printf("Factorial is %d \n",factorial);
}
//functions
