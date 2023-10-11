#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	if (num % 2 == 0) printf("This number is even\n");
	if (num % 2 == 1) printf("This number is odd\n");
	system("pause");
	return 0;
}