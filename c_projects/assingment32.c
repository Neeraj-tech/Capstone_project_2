//Pointers
//Preprocessors
#include <stdio.h>
void f(int *val);
int main(){
	int x=5;
	int y=5;
	int *ptr;
	ptr = &x;
	printf("%d\n",*ptr);
	printf("%p\n",ptr);
	printf("%p\n",&y+1);
	f(&x);
	printf("%d\n",x);
	printf("%p\n",&x);
}
void f(int *val){
	*val = 10;
}

