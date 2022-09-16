#include <stdio.h>

int main(void)
{
	float x1, y1, x2, y2, x3, y3, r1, r2, r3; //ввод нужных данных
	printf("Enter the coordinate: \n"); //процесс ввода
	scanf_s("%G", &x1);
	printf("x1 = %G\n", x1);
	printf("Enter the coordinate: \n");
	scanf_s("%G", &y1);
	printf("y1 = %G\n", y1);
	printf("Enter the coordinate: \n");
	scanf_s("%G", &x2);
	printf("x2 = %G\n", x2);
	printf("Enter the coordinate: \n");
	scanf_s("%G", &y2);
	printf("y2 = %G\n", y2);
	printf("Enter the coordinate: \n");
	scanf_s("%G", &x3);
	printf("x3 = %G\n", x3);
	printf("Enter the coordinate: \n");
	scanf_s("%G", &y3);
	printf("y3 = %G\n", y3);
	r1 = (x1 * x1 + y1 * y1); //находим расстояние В КВАДРАТЕ от точки до начала координат 
	printf("Distance: %G\n", r1); //ввывод этого расстояния
	r2 = (x2 * x2 + y2 * y2);
	printf("Distance: %G\n", r2);
	r3 = (x3 * x3 + y3 * y3);
	printf("Distance: %G\n", r3);
	if (r1 < r2 && r1 < r3) //условие для нахождения минимального расстояния
	{
		printf("The smallest distance: %G", r1); //ввывод этого расстояния
	}
	if (r2 < r1 && r2 < r3)
	{
		printf("The smallest distance: %G", r2);
	}
	if (r3 < r1 && r3 < r2)
	{
		printf("The smallest distance: %G", r3);
	}
}