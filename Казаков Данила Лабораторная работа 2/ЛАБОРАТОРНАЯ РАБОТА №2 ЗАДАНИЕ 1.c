#include <stdio.h>

int main()
{
	int a, b, c, d;
	for (int a = 1; a < 4; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			for (int c = 0; c < 10; c++)
			{
				for (int d = 0; d < 10; d++)
				{
					if ((a * 1000 + b * 100 + c * 10 + d) * 3 == (b * 1000 + c * 100 + d * 10 + a))
					{
						printf("%i", b * 1000 + c * 100 + d * 10 + a);
					}
				}
			}
		}
	}
	printf("There is no such number! \n");
	return 0;
}