#include <stdio.h>

int main(void)
{
	int a;
	int i;
	int found = 0;

	printf("정수 한개를 입력하시오:");
	scanf("%d", &a);
	if (a <= 1)
		printf("소수를 찾을수 없습니다.\n");

	else
	{
		for (i = 2; i < a; i++)
		{
			if (a%i == 0)
			{
				printf("%d는 소수가아닙니다.\n", a);
				found = 1;
				break;
			}
		}
		if (found == 0)
			printf("%d는 소수입니다.\n", a);
	}
	return 0;
}