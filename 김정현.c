#include <stdio.h>
#include <math.h>
int main()
{
	int input,num1,num2,count,x,y,z;
	scanf_s("%d", &input);
	int temp = input;

	if (input > 0) //자릿수
	{	
		for (count = 0; input > 0;count++)
		{ 			
			input = input / 10;		
		}
		printf("자릿수는 %d자리 입니다\n", count);
	}
	printf("\n");
	input = temp;

	if (input > 0) //앞부분
	{
		while (input > 0)
		{		
			num1 = input % 10;
			num2 = input / 10;
			printf("%d\n", num1);
			input = num2;
		}
	}
	printf("\n");
    input = temp;

	if (input > 0) //뒷부분
	{
		y = count-1;		
		for (x = 10; y >= 0; y--)
		{		
			z = (int)pow(x, y);
			num1 = input / z;
			num2 = num1 % 10;			
			printf("%d\n", num2);
		}
	}
}
