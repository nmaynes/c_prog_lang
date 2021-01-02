#include<stdio.h>

/* Print Fahrenheit-Celcius table
 * for Fahr = 0, 20, ..., 300 */

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf(" F    C   \n##########\n");
	while (fahr <= upper){
		celcius = 5 * (fahr - 32) / 9;
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr  + step;
	}

	celcius = lower;
	printf("\n\n  C    F  \n##########\n");
	while (celcius <= upper){
		fahr = (celcius * 9 / 5) + 32; 
		printf("%3.0f %6.1f\n",celcius, fahr);
	        celcius = celcius + step;
	}
}
