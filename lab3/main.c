#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int num, numTwo;

	puts("������� �����:");
	scanf("%d", &num);

	printf("������� �����: %d \n", num);

	puts("������� �����: ");
	scanf("%d", &numTwo);

	printf("����� ����� �����: %d", num + numTwo);

	return 0;
}