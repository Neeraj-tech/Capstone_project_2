/*Area & Parameter of rectangle & cirle*/
//Preprocessor
#include <stdio.h>

//Global declarations
int rectangle(int length,int bredth);
int circle(int radius);

//main method
void main(){
int length,bredth,radius;
printf("Please provide following details:\nLenth: "); 
scanf("%d",&length);
printf("Bredth:");
scanf("%d",&bredth);
rectangle(length,bredth);
printf("Radius:");
scanf("%d",&radius);
circle(radius);
};

//functions
int rectangle(int length, int bredth){
printf("Area of rectangle is: %d \n",length*bredth);
printf("Perimeter of rectangle is: %d \n",2*(length+bredth));
return 0;
}
int circle(int radius){
float area = radius*radius*3.14;
printf("Area of circle is: %f \n",area);
printf("Perimeter of circle is: %f \n",2*3.14*radius); 
return 0;
}

