#include <stdio.h>
#include <iostream>
#include <conio.h>
void calculateMath()
{
	int a, b,total, mark, product;//tong,hieu,tich
	float trade;//thuong
	printf("Input a: ");
	scanf_s("%d", &a);
	printf("Input b: ");
	scanf_s("%d", &b);
	total = a + b;
	mark = a - b;
	product = a * b;
	trade = (float)a / b;
	printf("Total: %d\n", total);
	printf("Mark: %d\n", mark);
	printf("Product: %d\n", product);
	printf("Trade: %3.2lf\n", trade);
}