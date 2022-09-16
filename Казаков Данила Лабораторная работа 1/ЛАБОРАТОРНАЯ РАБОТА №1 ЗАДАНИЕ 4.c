#include <stdio.h>

int main()
{
    char* Disciplines[] = { "Informatics,Language","Informatics,Language","Culture,Mathematics,Language","Culture,Mathematics,Language" }; //¬водим массив
    int n; //переменна€
    printf("Enter the discipline number: \n"); //¬водим переменную
    scanf_s("%d", &n);
    if (n > 0 && n < 4) //условие на правильность ввода
        printf("You enter %d - %s", n, Disciplines[n]); //берем данные из массива введенного номера
    else
        printf("You have a mistake"); //если введенный номер не попадает под условие
    return 0;
}