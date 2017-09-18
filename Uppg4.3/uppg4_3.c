#include <stdio.h>
	
int main()
{
	float pay = 0.01;
	int days = 0;
	while(pay<=10000000)
	{
		pay*=2;
		days++;
	}
	printf("Det tog %d dagar att få ihop tio miljoner",days);
}