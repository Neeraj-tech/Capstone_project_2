/* Array Pass by value & pass by reference */
//Preprocessor
#include <stdio.h>

//global declarations
void func1(int val); // pass by value
void func2(int *ref, int size); // pass by reference

// main method
int main(){
int arr[5] = {2,3,4,5,6};
func1(arr[3]);
printf("\n");
func2(arr, 5);
printf("\n");
return 0;
}

void func1(int val){
printf("Received value in %d",val);
}

void func2(int *ref,int size){
int i=0;
for(i=0;i<5;i++);{
printf("%d",*(ref+i));
}
}
