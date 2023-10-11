#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, mul;
	scanf("%d %d",&num,&mul);
	if (num%mul == 0) printf("The first is multiple of the second");
	if (num%mul != 0) printf("The first is no multiple of the second");
	system("pause");
	return 0;
}