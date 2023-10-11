#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float Total_miles, Cost, Avrage, Parking, Tolls;
	printf("Total miles driven per day : ");
	scanf("%f", &Total_miles);
	printf("Cost per gallon of gasoline : ");
	scanf("%f", &Cost);
	printf(" Average miles per gallon : ");
	scanf("%f", &Avrage);
	printf("Parking fees per day : ");
	scanf("%f", &Parking);
	printf("Tolls per day : ");
	scanf("%f", &Tolls);
	printf("Cost per day : %f\n", (Total_miles / Avrage)*Cost + Parking + Tolls);
	system("pause");
	return 0;
}