/* Fibonnaci Series */
//Preprocessor
#include <stdio.h>

//Global Declarations

//main method
void main(){
int num,n3;
int n1=0;
int n2=1;
printf("Please provide the number: ");
scanf("%d",&num);
printf("%d, %d, ",0,1);
for(int x=2;x<num;x++){
n3=n1+n2;
printf("%d, ",n3);
n1=n2;
n2=n3;
}
printf("\n");
}

