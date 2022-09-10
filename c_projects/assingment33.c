//Pointers
//Preprocessors
#include <stdio.h>

int main(){
	int x=5, y=10;
	int *ptr;
	int **pptr;
	ptr = &x;
	printf("%d\n",*ptr);
	pptr=&ptr;
	*ptr = 3;
	printf("*ptr = 3 makes x = %d\n",x);
	**pptr = 7;
	printf("**pptr = 7 makes x =%d\n",x);
	ptr = &y;
	**pptr = 9;
	printf("ptr = &y; **pptr =9; makes x = %d and y = %d\n",x,y);
	*pptr = &x;
	*ptr = -2;
	printf("*pptr =&x; *ptr =-2; makes x = %d and y = %d\n",x,y);
	**pptr = 4;
	printf("**pptr = 4; makes x = %d and y = %d \n",x,y);
	return 0;
}
