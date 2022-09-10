//Dynamic Memory Allocation Malloc Crete an array & print Sum of elements
//Preprocessor
#include <stdio.h>
#include <stdlib.h>

//Global Declarations
void resize();
//Main method
int main(){
	int n,i,*ptr,sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Error! memory not allocated.\n");
		exit(0);
	}
	printf("Enter elements of array: \n");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d\n",sum);
	for(i=0;i<n;i++)
		printf("%p\t",ptr+i);
	printf("\n");
	resize();
	free(ptr);
	return 0;
}
void resize(){
	int n1,n2,i,*ptr;
	printf("Enter Size of array: ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	if(ptr==NULL){
		printf("Error! memory not allocated.\n");
		exit(0);
	}
	printf("Address of previously allocted memory: \n");
	for(i=0;i<n1;i++)
		printf("%p\t",ptr+i);
	printf("\nEnter new size of array:\n");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2);
	for(i=0;i<n2;i++)
		printf("%p\t",ptr+i);
	printf("\n");
	free(ptr);
}



