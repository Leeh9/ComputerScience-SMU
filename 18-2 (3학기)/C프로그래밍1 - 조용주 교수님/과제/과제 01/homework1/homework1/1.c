#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;
	int b;
	int c;
	double result1;
	double result2;

	printf("������ ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	result1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	result2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	printf("��:%lf , %lf\n", result1, result2);

	return 0;
}