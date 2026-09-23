#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main() {
    double totalMiles;
    double costPerGallon;
    double milesPerGallon;
    double parkingFees;
    double tolls;
    double dailyCost;

    printf("Total miles driven per day: ");
    scanf("%lf", &totalMiles);

    printf("Cost per gallon of gasoline: ");
    scanf("%lf", &costPerGallon);

    printf("Average miles per gallon: ");
    scanf("%lf", &milesPerGallon);

    printf("Parking fees per day: ");
    scanf("%lf", &parkingFees);

    printf("Tolls per day: ");
    scanf("%lf", &tolls);

    dailyCost =
        (totalMiles / milesPerGallon) * costPerGallon + parkingFees + tolls;

    printf("The cost of driving to work per day is: $%.2f\n", dailyCost);

    return 0;
}