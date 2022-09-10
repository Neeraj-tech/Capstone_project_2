#include <stdio.h>
#define PI 3.14
#define area(radius) ((PI)*(radius)*(radius))
int main(){
int radius;
float area;
printf("Enter radius of circle :");
scanf("%d",&radius);
printf("Area of circle with radius %d is %f :\n",radius,area(radius));
return 0;
}
