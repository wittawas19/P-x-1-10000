#include <stdio.h>

int main()
{
	int sum = 0 ; 
	for (int x = 1; x < 10001; x++)
	{
		for (int i = 1; i < x; i++)
		{
			if (x % i == 0)
			{
				sum = sum + i;
			}
		}
		if (sum == x)
		{
			printf("%d \n", x);
		}
		sum = 0;
	}
}