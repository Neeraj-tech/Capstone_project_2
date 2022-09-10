/* Macro Continuation, stringize or number-sign operator(‘#’), Parameterized Macros & itinary example*/
#include <stdio.h>
#define message_for(a,b) \
printf(#a " and " #b " : Ilove India!\n")

#define MAX(x,y) ((x)>(y)?(x):(y))
int main(void)
{
message_for(Carole,Debra);
printf("%d is greater.\n",MAX(10,20));
printf("%d is lower.\n",10<20?10:20);
return 0;
}
