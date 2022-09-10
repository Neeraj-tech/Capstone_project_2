//Pointers sorting an array
//Preprocessors
#include <stdio.h>

void swap(int *p,int i, int j);

int main(){
	int a[10]={2,5,8,3,9,0,1,4,7,6};
	int i=0, j=0;
	printf("Before sort function on array: ");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j])
				swap(a,i,j);
		}
	}
	
	printf("Array after sorting: ");
	
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	
	printf("\n");
	return 0;
}
void swap(int *p, int i,int j){
	int temp = *(p+i);
	p[i] = p[j];
	*(p+j) = temp;
}
