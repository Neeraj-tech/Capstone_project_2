//Sorting
#include<stdio.h>
void quickSort(int *a,int p,int r);
int partition(int *a,int p,int r);
int main(){

	int a[10] = {5,2,465,23,42,657,27,89,87,90};

	quickSort(a,0,9);
	int i;
	for(i=0;i<10;i++)
		printf(" %d ,",a[i]);
	printf("\n");
}

void quickSort(int *a,int p,int r){
	if(p>r)
		return;
	int part = partition(a,p,r);
	quickSort(a,p,part-1);
	quickSort(a,part+1,r);
}

int partition(int *a,int p,int r){
	
	int i=p-1;
	int j=p;
	int temp;
	while(j<r){
		if(a[j] < a[r]){
			i++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		j++;
	}
	temp = a[i];
	a[i] = a[r];
	a[r] = temp;
	i++;
	return i;
}
