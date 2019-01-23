#include <stdio.h>

int main(void)
{
	int N;
	int i = 0;
	double a;
	double sum = 0;
	double ave = 0;


	printf("몇개의 숫자값을 입력하시겠습니까? : ");
	scanf("%d", &N);
	printf("실수 값 %d개를 입력하시오.\n", N);
	while (i < N)
	{
		scanf("%lf", &a);
		sum = sum + a;
		i++;
	}
	ave = sum / N;
	printf("합계: %lf , 평균: %lf\n", sum, ave);
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
//	printf("몇개의 숫자값을 입력하시겠습니까? : ");
//	scanf("%d", &N);
//	printf("실수 값 %d개를 입력하시오.\n",N);
//	for (i=0; i< N; i++)
//	{
//		scanf("%lf", &a);
//		sum = sum + a;
//	}
//	ave = sum / N;
//	printf("합계: %lf , 평균: %lf\n", sum, ave);
//	return 0;
//}