/* macros & directives */
//Preprocessor
#include <stdio.h>
#define height 100
#define number 3.14
#define letter 'A'
#define letter_sequence "ABC"
#define backslash_char '\?'
void function1();
void function2();
#pragma startup function1()
#pragma exit function2()
//global declarations

//main method
int main(){
printf("now we are in main function.\n");
printf("File: %s\n",__FILE__);
printf("Date: %s\n",__DATE__);
printf("Time: %s\n",__TIME__);
printf("Line: %d\n",__LINE__);
printf("ANSI: %d\n",__STDC__);
printf("Value of height: %d\n",height);
printf("Value of number: %f\n",number);
printf("Value of letter: %c\n",letter);
printf("Value of letter_sequence: %s\n",letter_sequence);
printf("Value of backslash: %c\n",backslash_char);

#ifdef height
printf("height is defined\n");
#else
printf("height is not defined\n");
#endif
//ifndef	else	endif
#ifndef HI
{
printf("HI is not defined. So we are going to defined it.\n");
#define HI 300
}
#else
printf("HI is already defined.\n");
#endif
return 0;
}

void function1(){
printf("Function 1 is called before main function call.\n");
}

void function2(){
printf("Function 2 is called before end of main function.\n");
}
