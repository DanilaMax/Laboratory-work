#include <stdio.h>

int main(void)
{
    int n;
    printf("Number: \n");
    scanf_s("%i", &n);
    int f1 = 1, f2 = 1, f = 0;

    while (f < n) 
    {
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    printf("%s\n", f == n ? "True" : "False");
    return 0;
}