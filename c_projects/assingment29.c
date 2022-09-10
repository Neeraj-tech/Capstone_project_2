/* Structure write a program to take student details.
And print the student record in ascending order of their roll number.*/
//Preprocessor
#include <stdio.h>

//Global Declarations
struct student {
char name[20];
int age;
int r_no;
};

struct student sort(struct student st[]);
//main method
int main(){
int max =10;
int i;

struct student s[max];
for(int i=0;i<max;i++){
printf("Enter name of student: ");
scanf("%s",s[i].name);
printf("Enter age: ");
scanf("%d",&s[i].age);
printf("Enter Roll number: ");
scanf("%d",&s[i].r_no);
}
s= sort(s);

for(int i=0;i<max;i++){
printf("Name: %s | Age: %d | Roll number: %d\n",s[i].name,s[i].age,s[i].r_no);
}

return 0;
}

struct student sort(struct student st){
char name[20];
int age;
int r_no;
int x=0;

for(int i=9;i>=0;i--){
printf("i is %d\n",i);
for(int j=0;j<j-i;j++){
if(st[x].r_no<st[j].r_no){
x=j;
}
}
name=st[i].name;
age=st[i].age;
r_no=st[i].r_no;

st[i].name=st[x].name;
st[i].age=st[x].age;
st[i].r_no=st[x].r_no;

st[x].name=name;
st[x].age=age;
st[x].r_no=r_no;
}

return st;
}
