#include <stdio.h>
#include <string.h>

#define MAX_LEN		256

//int main(void)
//{
//	char s1[MAX_LEN];
//
//	printf("���ڿ� 1�� �Է��ϼ���: ");
//	gets(s1, MAX_LEN);
//	char ch = getchar();
//
//	char* p = strrchr(s1, ch);
//
//	if (p == NULL) {
//		printf("s1�� %c�� ����\n", ch);
//	}
//	else {
//		printf("s1�� %c�� ����. %s\n", ch, p);
//	}
//	return 0;
//}


int main(void)
{
	char s1[MAX_LEN];

	printf("���ڿ� 1�� �Է��ϼ���: ");
	gets(s1, MAX_LEN);

	char* p = strpbrk(s1, "wW\t\n");

	if (p == NULL) {
		printf("s1�� ����\n");
	}
	else {
		printf("s1�� ����. %s\n", p);
	}
	return 0;
}