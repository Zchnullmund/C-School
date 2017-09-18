#include <stdio.h>
#include <stdlib.h>
	
int main()
{
	system("chcp 1252");
	
	int startAntal = 26000, inflyttade = 300, utflyttade = 325;
	float fodda = 0.0, avlidna = 0.0;
	
	int year;	
	int summa = startAntal;

	printf("Ange år efter 2015: ");
	scanf("%d", &year);

	
	for(int i = 2015; i < year; i++)
	{
		summa -= 25;
		fodda = summa * .007;
		avlidna = summa * .006f;
		summa = (summa + fodda) - avlidna;
		
	}
	printf("Invånarantal år %d %d", year, summa);
}