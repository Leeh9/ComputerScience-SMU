#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
#define SIZE 128
	char s1[SIZE] = "Hello World";
	char s2[SIZE];
	strcpy(s2, s1); /* ���ڿ� ����, 11���ڸ� ���� */
	printf("s2 = %s\n", s2);
	memset(s2, 0, SIZE); /* �迭 �ʱ�ȭ */
	printf("s2 = %s\n", s2);
	memcpy(s2, s1, 5); /* �迭 ����, 128����Ʈ ���� */
	printf("s2 = %s\n", s2);

	int a = 3;
	int b = 0;

	memcpy(&b, &a, sizeof(int)); /* a = b; */
	printf("b = %d\n", b);
	return 0;
}