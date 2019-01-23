#include <stdio.h>
#include <string.h>

#define MAX_LEN		256

//int main(void)
//{
//	char s1[MAX_LEN];
//
//	printf("문자열 1을 입력하세요: ");
//	gets(s1, MAX_LEN);
//	char ch = getchar();
//
//	char* p = strrchr(s1, ch);
//
//	if (p == NULL) {
//		printf("s1에 %c가 없음\n", ch);
//	}
//	else {
//		printf("s1에 %c가 있음. %s\n", ch, p);
//	}
//	return 0;
//}


int main(void)
{
	char s1[MAX_LEN];

	printf("문자열 1을 입력하세요: ");
	gets(s1, MAX_LEN);

	char* p = strpbrk(s1, "wW\t\n");

	if (p == NULL) {
		printf("s1에 없음\n");
	}
	else {
		printf("s1에 있음. %s\n", p);
	}
	return 0;
}