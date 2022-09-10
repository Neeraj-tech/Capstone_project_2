/* File writte & read */
//Preprocessor
#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("test.txt","w+");
	fprintf(fp,"This is test content ....");
	fputs("This is another test content ....",fp);
	fclose(fp);
	return 0;
}

