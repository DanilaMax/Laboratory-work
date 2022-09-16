#include <stdio.h>

int main(void)
{
	float a, b, c, d; //вводим нужные данные
	a = 0;
	b = 0;
	c = 0;
	printf("Enter a number: \n"); //ввод этих данных
	scanf_s("%G", &a);
	printf("a = %G\n", a);
	printf("Enter a number: \n"); //ввод этиъ данных
	scanf_s("%G", &b);
	printf("b = %G\n", b);
	printf("Enter a number: \n"); //ввод этих данных
	scanf_s("%G", &c);
	printf("c = %G\n", c);
	if (a > b && a > c) //необходимое условие
	{
		a = d; //присвоение переменной d
		printf("The largest number: %G", d);
		return 0;
	}
	if (b > a && b > c)
	{
		b = d;
		printf("The largest number: %G", d);
		return 0;
	}
	if (c > b && c > a)
	{
		c = d;
		printf("The largest number: %G", d);
		return 0;
	}
}