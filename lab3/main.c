#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int num, numTwo;

	puts("¬ведите число:");
	scanf("%d", &num);

	printf("¬ведино число: %d \n", num);

	puts("¬ведите число: ");
	scanf("%d", &numTwo);

	printf("—умма чисел равна: %d", num + numTwo);

	return 0;
}