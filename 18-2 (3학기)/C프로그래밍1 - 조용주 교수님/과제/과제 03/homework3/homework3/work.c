#include <stdio.h>

int main(void)
{
	int a;
	int i;
	int found = 0;

	printf("���� �Ѱ��� �Է��Ͻÿ�:");
	scanf("%d", &a);
	if (a <= 1)
		printf("�Ҽ��� ã���� �����ϴ�.\n");

	else
	{
		for (i = 2; i < a; i++)
		{
			if (a%i == 0)
			{
				printf("%d�� �Ҽ����ƴմϴ�.\n", a);
				found = 1;
				break;
			}
		}
		if (found == 0)
			printf("%d�� �Ҽ��Դϴ�.\n", a);
	}
	return 0;
}