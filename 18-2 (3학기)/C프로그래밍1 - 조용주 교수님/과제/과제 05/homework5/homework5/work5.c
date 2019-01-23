#include <stdio.h>
#include <stdlib.h> /* rand() 함수를 위해 필요함 */
#include <time.h> /* time() 함수를 위해 필요함 */


int main(void)
{
	int a[50];
	int i;
	int j;
	srand(time(NULL)); /* 난수 발생기 초기화 */
	int n = rand();
	int sum = 0;
	double ave;
	int count1 = 0;
	int count11 = 0;
	int count21 = 0;

	printf("Index\tValue\tHistogram\n");
	printf("--------------------------------------------\n");

	for (i = 0; i < 50; i++)
	{
		n = rand() % 30 + 1; /* 1~30까지의 숫자를 발생시킴 */
		a[i] = n;
		sum += n;
		printf("%d\t%d\t", i, a[i]);
		for (j = 0; j < n; j++)
		{
			printf("*"); 
		}
		printf("\n");
		if (a[i] <= 10)
			count1 += 1;
		else if (a[i] <= 20)
			count11 += 1;
		else
			count21 += 1;
	}
	ave = (double)sum / 50;
	printf("Average: %lf\n", ave);
	printf("1-10: %d\n", count1);
	printf("11-20: %d\n", count11);
	printf("21-30: %d\n", count21);

	return 0;
}