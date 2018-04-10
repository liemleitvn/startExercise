//Bai tap: Nhap vao so nguyen, dem va in tat ca nhung uoc so
#include<stdio.h>
#include<conio.h>
#include<math.h>
void displayDivisor()
{
	int number;
	int plus;//dem uoc so cua so vua nhap
	plus = 0;
	printf("Input number: ");
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++)
		if (number%i == 0)//kiem tra xem i có chia het chi number khong
		{
			printf("%d  ", i);
			plus++;
		}
	printf("\nCo tat ca %d uoc so cua %d", plus, number);
}
