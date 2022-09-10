/* m^n using recursion */
//Preprocessor
#include <stdio.h>

//global declaraion
int power(int m, int n);

//main method
void main(){
int m,n;
printf("Please provide m^n :");
scanf("%d%d",&m,&n);
printf("m^n is: %d \n",power(m,n));
}
int power(int m,int n){
int x=1;
if(n>0){
x = m * power(m,--n);
}
return x;
}
