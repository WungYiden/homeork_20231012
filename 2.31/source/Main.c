#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("number square cude\n");
	int i;
	for (i = 0; i <= 3; i++)
	{
		printf("%d      %d      %d\n", i, i*i, i*i*i);
	}
	for (i = 4; i <= 9; i++)
	{
		printf("%d      %d     %d\n", i, i*i, i*i*i);
	}
		printf("%d     %d    %d\n", i, i*i, i*i*i);
	system("pause");
	return 0;
}