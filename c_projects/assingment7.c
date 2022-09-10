/*add 1 to each digit*/
//preprocessor
#include <stdio.h>
//global declarations
//main method
void main(){
int num;
printf("Please provide a 5 digit number: ");
scanf("%d",&num);
int new_num=0;
int x =10000;
while(num>0){
new_num *=10;
if(num/x != 9){
new_num += num/x+1;
}
num %=x;
x /= 10;
}
printf("New number is: %d \n",new_num);
}
//functions
