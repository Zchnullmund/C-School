//emund uppgift 2.3
#include <stdio.h>
#include <stdlib.h>

int main ()
{	
	system("chcp 1252");
	
	float milesPerGallon, milPerLiter;

	printf("\nAnge bensinförbrukning (miles/gallon): ");
	scanf("%f", &milesPerGallon);
	
	milPerLiter = milesPerGallon * 0.1609 / 3.785;
	
	printf("%.4f Miles/Gallon = %.4f Mil/Liter", milesPerGallon, milPerLiter);
}