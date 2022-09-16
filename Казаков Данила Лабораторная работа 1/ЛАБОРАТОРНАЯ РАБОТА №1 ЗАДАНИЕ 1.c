#include <stdio.h> 
int main(void)
{
    float r, l, S; //вводим нужные переменные
    r = 0;
    l = 0;
    S = 0;
    printf("Enter the radius:\n"); //ввод радиуса
    scanf_s("%G", &r);
    printf("r = %G\n", r);
    if (r > 0)
    {
        S = 3.14 * r * r; //находим площадь
        printf("The area of the circle is equal to: %G\n", S);
        l = 2 * 3.14 * r; //находим обьем
        printf("The circumference is equal to: %G\n", l);
        return  0;
    }
    if (r < 0)
    {
        printf("You have a mistake. Check the data."); //условие, если введеное число меньше нудя
    }
    return 0;
}