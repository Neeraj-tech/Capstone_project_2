//read from a file
//Preprocessor
#include <stdio.h>

int main(){
	FILE *fm;
	fm = fopen("test.txt","r");

	char buffer[256];
	
	fscanf(fm,"%s",buffer);
	printf("%s\n",buffer);

	fgets(buffer,256,(FILE *)fm);
	printf("%s\n",buffer);

	return 0;
}

