/*Nhap vao so nguyen n, kiem tra co phai so nguyen hoan chinh khong
So nguyen hoan chinh la so co tong uoc so bang tich uoc so(khong ke so n)*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void intComplete()
{
	int number;
	int i;
	int total;//tong uoc so
	long product;//tich cac uoc so
	total = 0;
	product = 1;
	printf("Please input number: ");
	scanf_s("%d", &number);
	for(i=1;i<number;i=i++)
		if (number%i == 0)
		{
			total = total + i;
			product = product * i;
		}
	if (total == product)
	{
		printf("Number %d is a Interger Complete", number);
	}
	else
	{
		printf("Number %d is not Interger Complete",number);
	}
}