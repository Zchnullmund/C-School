#include <stdio.h>
#include <stdlib.h>
#define EPSILON 0.00001
	
int main()
{
	system("chcp 1252");
	system("cls");
	
	int summ = 0, scaler = 1;
	
	while (summ>=EPSILON)
	{
		summ += 1/scaler++;
	}
}