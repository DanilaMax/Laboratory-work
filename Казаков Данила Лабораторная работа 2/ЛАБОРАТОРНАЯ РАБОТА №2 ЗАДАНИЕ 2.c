#include <stdio.h>

int main()
{
    int n, a, b, c, d, sum;
    for (n = 1000; n < 9999; n++)
    {
        a = n % 10;
        b = n % 100;
        b = (b - a) / 10;
        c = n % 1000;
        c = (c - b - a) / 100;
        d = n % 10000;
        d = (d - c - b - a) / 1000;
        sum = a + b + c + d;
        if (n % 2 == 0 && n % 7 == 0 && n % 11 == 0)
        {
            if (sum == 30)
            {
                printf("Chislo: %d\n", n);
                return;
            }
        }
    }
}