#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3) printf("largest=%d smallest=%d", num1,num3);
		if (num2 < num3) printf("largest=%d smallest=%d", num1,num2);
	}
	if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3) printf("largest=%d smallest=%d", num2,num3);
		if (num1 < num3) printf("largest=%d smallest=%d", num2,num1);
	}
	if (num3 > num1 && num3 > num2)
	{
		if (num1 > num2) printf("largest=%d smallest=%d", num3,num2);
		if (num1 < num2) printf("largest=%d smallest=%d", num3,num1);
	}
	system("pause");
	return 0;
}