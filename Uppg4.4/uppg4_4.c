#include <stdio.h>

	
int main()
{
	int rader, summa = 1;
	puts("Antal rader: ");
	scanf("%d", &rader);
	
	for(int i = 1; i<rader;i++)
	{
		for(int j = 1; j <= i; j++)
		{
			summa = i*j;
			printf("%d ", summa);
		}
		puts("");
	}
	
}