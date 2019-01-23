#include <stdio.h>
#include <string.h>

#define MAX_LEN		256

int main(void)
{
	char s1[MAX_LEN];
	char s2[MAX_LEN];

	printf("문자열 1을 입력하세요: ");
	gets(s1, MAX_LEN);
	printf("문자열 2를 입력하세요: ");
	gets(s2, MAX_LEN);
	char* p = strstr(s1, s2);
	if (p == NULL) {
		printf("s1에 s2가 포함되지 않음\n");
	}
	else {
		printf("s1에 s2가 포함되어 있음: %s\n", p);
	}
	return 0;
}