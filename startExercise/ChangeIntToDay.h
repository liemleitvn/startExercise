/*Nhap so n (1<=n<=7), doi thanh Sunday den Saturday*/
#include <stdio.h>
#include<conio.h>
#include<math.h>
void changeIntToDay()
{
	int n;//Input number
	printf("Please input number: ");
	scanf_s("%d",&n);
	printf("\n");
	switch (n)
	{
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5: 
		printf("Thusday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	default:
		printf("Number input invalid !");
		break;
	}
}

