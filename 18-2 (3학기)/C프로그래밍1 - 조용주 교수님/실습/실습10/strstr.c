#include <stdio.h>
#include <string.h>

#define MAX_LEN		256

int main(void)
{
	char s1[MAX_LEN];
	char s2[MAX_LEN];

	printf("���ڿ� 1�� �Է��ϼ���: ");
	gets(s1, MAX_LEN);
	printf("���ڿ� 2�� �Է��ϼ���: ");
	gets(s2, MAX_LEN);
	char* p = strstr(s1, s2);
	if (p == NULL) {
		printf("s1�� s2�� ���Ե��� ����\n");
	}
	else {
		printf("s1�� s2�� ���ԵǾ� ����: %s\n", p);
	}
	return 0;
}