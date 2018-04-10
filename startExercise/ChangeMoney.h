/*Nhap so tien bat ky.
doi thanh tien co menh gia 10.000, 500, 50, 20,1
Uu tien tien co menh gia cao truoc*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void changeMoney()
{
	int money;//bien nhap so tien
	int surPlus;//so phan du cua tien
	int seri10000, seri500, seri50, seri20, seri1;
	printf("Program change money ");
	printf("Please input money(money>0): ");
	scanf_s("%d", &money);
	if (money > 0)
	{
		seri10000 = money / 10000;//tinh so to 10.000
		surPlus = money % 10000;//tinh phan du con lai
		seri500 = surPlus / 500;
		surPlus = surPlus % 500;
		seri50 = surPlus / 50;
		surPlus = surPlus % 50;
		seri20 = surPlus / 20;
		seri1 = surPlus % 20;
		printf("Money 10.000: %d\n", seri10000);
		printf("Money 500: %d\n", seri500);
		printf("Money 50: %d\n", seri50);
		printf("Money 20: %d\n", seri20);
		printf("Money 1: %d\n", seri1);
	}
	else
	{
		printf("Money invalid !");
	}

}

