#include <stdio.h>
#include <iostream>
#include<math.h>
#define PI 3.141592;
void calculateCircle()
{
	float r, c, s;//ban kinh,chu vi,dien tich
	printf("Program calculates perimeter, area of circle\n");
	printf("Input radius: ");
	scanf_s("%f", &r);
	c = 2 * r*PI;
	s = r * r*PI;
	printf("Primeter: %0.4f\n", c);
	printf("Area: %0.4f\n", s);
}