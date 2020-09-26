#include <stdio.h>

int main()
{
	int num1, num2;
	scanf_s("%d", &num1);
	if (num1 >= 1 && num1 <= 9)
	{
		for (num2 = 1;num2 <= 9;num2++)
		{
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
		}
	}
	return 0;
}
