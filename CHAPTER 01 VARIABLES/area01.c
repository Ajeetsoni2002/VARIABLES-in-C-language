#include<stdio.h>
int main()
{
int radius;
float pi=3.14;

printf("enter the value of radius\n");
scanf("%d",&radius);

printf("the area of the circle is %f\n",pi*radius*radius);

printf("circumference of the cicle is %f\n",2*pi*radius);

printf("diameter of the circle is %d\n",radius*2);

printf("area of a sphere %f\n",4*pi*radius*radius);

printf("volume of the sphere is %f\n",4/3*pi*radius*radius);








        return 0;
}