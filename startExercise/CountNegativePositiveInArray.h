/*Nhap vao mot mang n phan tu
Dem so phan tu am, duong, bang khong.
Xem mang co sap xep theo thu tu tang/giam khong*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void countNegativePositive()
{
	int n, i;//n la so phan tu trong mang
	int a[100];//khai bao mang co 100 phan tu
	int negative = 0, positive = 0, zero = 0;//khai bao va gan cac bien dem phan tu am, duong,bang 0
	int rise = 0, reduction = 0;//khai bao va gan gia tri cach bien dem mang tang,giam
	printf("Please input the total element of aray: ");//nhap tong so phan tu cua mang
	scanf_s("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		printf("Number %d: ", i+1);
		scanf_s("%d", &a[i]);
	}
	for()
}
