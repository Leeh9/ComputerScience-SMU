#include <stdio.h>

int main(void)
{
	int N;
	int i = 0;
	double a;
	double sum = 0;
	double ave = 0;


	printf("��� ���ڰ��� �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d", &N);
	printf("�Ǽ� �� %d���� �Է��Ͻÿ�.\n", N);
	while (i < N)
	{
		scanf("%lf", &a);
		sum = sum + a;
		i++;
	}
	ave = sum / N;
	printf("�հ�: %lf , ���: %lf\n", sum, ave);
	return 0;
}
//
//int main(void)
//{
//	int N;
//	int i;
//	double a;
//	double sum = 0;
//	double ave = 0;
//
//
//	printf("��� ���ڰ��� �Է��Ͻðڽ��ϱ�? : ");
//	scanf("%d", &N);
//	printf("�Ǽ� �� %d���� �Է��Ͻÿ�.\n",N);
//	for (i=0; i< N; i++)
//	{
//		scanf("%lf", &a);
//		sum = sum + a;
//	}
//	ave = sum / N;
//	printf("�հ�: %lf , ���: %lf\n", sum, ave);
//	return 0;
//}