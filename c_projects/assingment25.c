/* some basic function & also check string is palindrome or not */
//preprocessors
#include <stdio.h>
#include <string.h>
//Global Declarations
int pallindrome(char str[], int size);
//Main Method
int main(){
char str[10];
printf("Enter the string: ");
scanf("%s",str);
char str3[6];
//using strlen
printf("Length of string str is %lu \n",strlen(str));
printf("Length of string str3 is %lu \n",strlen(str3));

//printing string character character by character
for(int i=0;i<6;i++)
{
printf("%c\n",str[i]);
}

//using strncpy
strncpy(str3,str,4);
printf("After strncpy, str3 is %s\n",str3);
printf("Length of string str3 is %lu \n",strlen(str3));

//using strcpy
strcpy(str3,str);
printf("After strcpy, str3 is %s\n",str3);
printf("Length of string str3 is %lu \n",strlen(str3));

//using strcmp
printf("Compare result of str & str3: %d\n",strcmp(str,str3));

//pallindrome
printf("%s pallindrome.\n", (pallindrome(str,strlen(str)) == 0) ? "is":"is not");
return 0;
}

int pallindrome(char str[],int size){
int start =0;
int end = size-1;
int result =0;
while(start<=end){
if(str[start] != str[end]){
result =1;
break;
}
start++;
end--;
}
return result;
}
