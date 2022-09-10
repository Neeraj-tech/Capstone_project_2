//Pointers
//Preprocessors
#include <stdio.h>

void swap(int *p1,int *p2);

int main(){
	int x=5, y=10;
	printf("Before swap function: x = %d and y = %d \n",x,y);
	swap(&x,&y);
	printf("After swap function: x = %d and y = %d \n",x,y);
	return 0;
}
void swap(int *p1, int *p2){
	int x= *p1;
	*p1 = *p2;
	*p2 = x;
}
