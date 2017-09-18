//Emund uppgift 3.4

#include <stdio.h>
#include <stdlib.h>

int main() 

{	system("chcp 1252");

	puts("Skriv ett tal");
	
	int n,k,summa;
	scanf(%d, &n);
	k=1;
	while(k<n)
	{
		summa += (k*k);
	}
	printf("%d", summa);
}