#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double m = 1200;
	double r = 7.5;
	double s = 1;
	int n = 5, k = 1;

	while (k <= n)
	{
		s *= (1 + r / 100);
		printf("%f\n", s);
		k++;
	}

	printf("Сумма вклада (ден. ед.):\t%.2f\n", m);
	printf("Процентная ставка (проц.):\t%.2f\n", r);
	printf("Вклад на %d лет\n", n);
	printf("Прибыль (в ден. ед.):\t%.2f\n", m * (s - 1));
	printf("Прибыль (в проц.):\t%.2f\n", 100 * (s - 1));

	return 0;
}
