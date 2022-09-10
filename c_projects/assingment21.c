/* write a program to reverse an array*/
//Preprocessor
#include <stdio.h>

//Global Declarations

//main method
int main(){
int num;
int arr[5];
printf("please provide 5 numbers:\n");
for(int i=0;i<5;i++)
{
printf("%d number: ",i+1);
scanf("%d",&num);
arr[i]=num;
}
int x;
for(int i=0;i<2;i++)
{
x=arr[i];
arr[i]=arr[4-i];
arr[4-i]=x;
}
for(int i=0;i<5;i++){
printf("%d,",arr[i]);
}
printf("\n");
return 0;
}
