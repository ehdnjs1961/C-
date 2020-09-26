#include <stdio.h>

int main()
{
	int H, M, sum;
	scanf_s("%d%d", &H, &M);

	if (H >= 0 && H <= 23 && M >= 0 && M <= 59)
	{
		sum = H * 60 + M;
		if (sum <= 44)
		{
			sum = sum + 1440;
		}
		sum = sum - 45;
		H = sum / 60;
		M = sum % 60;		
			printf("%d %d", H, M);		
	}
	return 0;
}
