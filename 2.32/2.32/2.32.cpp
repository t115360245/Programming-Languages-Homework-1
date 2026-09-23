#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main() {
	float weight, height;
	printf("%-10s \n", "Enter weight(kg) and height(m):");
	scanf("%f , %f", &weight, &height);
	float bmi = weight / pow(height, 2);
	printf("%-10s %0.2f \n", "BMI VALUES", bmi);
	printf("%-10s %-10s \n", "Underweight:", "less than 18.5");
	printf("%-10s %-10s \n", "Normal weight:", "between 18.5 and 24.9");
	printf("%-10s %-10s \n", "Overweight:", "between 25 and 29.9");
	printf("%-10s %-10s \n", "Obesity:", "30 or greater");
	return 0;
}
