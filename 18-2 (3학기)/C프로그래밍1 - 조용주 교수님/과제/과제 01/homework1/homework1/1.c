#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;
	int b;
	int c;
	double result1;
	double result2;

	printf("세개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	result1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	result2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	printf("해:%lf , %lf\n", result1, result2);

	return 0;
}