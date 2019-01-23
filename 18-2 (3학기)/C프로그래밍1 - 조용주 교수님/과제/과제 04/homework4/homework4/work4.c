#include <stdio.h>

int isPrimeNumber(int a);
int readNumber(void);
void printPrimeOrNot(int a, int found);

int main(void)
{
	int found;
	int num;

	num = readNumber();
	found = isPrimeNumber(num);
	printPrimeOrNot(num,found);
	return 0;
}

int isPrimeNumber(int a)
{
	int i;
	for (i = 2; i < a; i++)
	{
		if (a%i == 0)
			return 0;
	}
	return 1;
}

int readNumber(void)
{
	int a;
	for (;;)
	{
		printf("1보다 큰 정수 값을 입력하시오:");
		scanf("%d", &a);
		if (a > 1)
			return a;
	}
}

void printPrimeOrNot(int a, int found)
{
	if (found == 1)
		printf("%d는 소수입니다.\n", a);
	else
		printf("%d는 소수가 아닙니다.\n", a);
}