#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weightInKilograms, beightInches;
	printf("weightInKilograms=");
	scanf("%f", &weightInKilograms);
	printf("beightInches=");
	scanf("%f", &beightInches);
	printf("BMI is %f\n", weightInKilograms / (beightInches*beightInches));
	
	if (weightInKilograms / (beightInches*beightInches) < 18.5) printf("BMI VALUES is Underweight");
	if (weightInKilograms / (beightInches*beightInches) >= 18.5 && weightInKilograms / (beightInches*beightInches) < 29.9) printf("BMI VALUES is Normal");
	if (weightInKilograms / (beightInches*beightInches) >= 30) printf("BMI VALUES is Overeight");
	if (weightInKilograms / (beightInches*beightInches) < 18.5) printf("BMI VALUES is Obese");

	system("pause");
	return 0;
}