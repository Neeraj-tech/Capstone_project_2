/* armstrong number */
//preprocessor
#include <stdio.h>
//global declarations
//main method
void main(){
int num;
int armstrong=0;
printf("Please provide a number:");
scanf("%d",&num);
int x=num;
while(num>0){
armstrong += (num%10)*(num%10)*(num%10);
num /=10;
}
num=x;
if(armstrong==num){
printf("%d is a Armstong number.\n",num);
}
else{
printf("%d is not a Armstrong number.\n",num);
}
}
//functions
