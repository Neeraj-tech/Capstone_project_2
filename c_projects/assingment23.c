/* To input two matrix & Print their multiplications */
//Preprocessor
#include <stdio.h>
//Global Declarations
//main method
int main(){
int row =3;
int col=3;
int arr[row][col];
printf("Please provide number for matrix:\n");
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("Enter the value at row %d col %d: ",i,j);
scanf("%d",&arr[i][j]);
}
}
return 0;
}
