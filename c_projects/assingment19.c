/*largest & smallest element in Array*/
//Preprocessor
# include <stdio.h>
//Global declarations
//main method
int main(){
int num;
int arr[5];
printf("Please provide 5 numbers:\n");
for(int i=0;i<5;i++)
{
printf("%d number: ",i+1);
scanf("%d",&num);
arr[i] = num;
}
int largest = arr[0];
int smallest = arr[0];
for(int i=0;i<5;i++)
{
if(largest < arr[i]){
largest = arr[i];
}
if(smallest > arr[i]){
smallest = arr[i];
}
}
printf("%d is the smallest number.\n",smallest);
printf("%d is the largest number.\n",largest);
}
