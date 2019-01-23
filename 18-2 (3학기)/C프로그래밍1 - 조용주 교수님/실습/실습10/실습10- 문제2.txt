#include <stdio.h>
#include <string.h>

#define str 20
#define maxword 10

typedef struct {
	char p1[str];
	int sump;
}letter;

int calcSum(const char* p1)
{
	int sump = 0;
	for (int i = 0; i < strlen(p1); i++)
	{
		sump += p1[i];
	}
	return sump;
}

int main(void)
{
	letter w[maxword];
	int i;
	int sum = 0;

	printf("10개의 단어를 입력하시오\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%s", w[i].p1);
		w[i].sump = calcSum(w[i].p1);
		sum += w[i].sump;
	}
	printf("sum=%d\n", sum);
	return 0;
}