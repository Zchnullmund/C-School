//Emund uppgift 3.4

#include <stdio.h>
#include <stdlib.h>

int main() 

{	system("chcp 1252");

	int gender;
	long long int personnummer;

	printf("\nAnge k�n, tjej[0] eller kille[1]: ");
	scanf("%d", &gender);

	printf("Ange personnummer: ");
	scanf("%lld", &personnummer);
	
	personnummer/=10;

	if(personnummer%2==gender)
		puts("Det st�mmer!");
	else
		puts("Det st�mmer ej!");
}