#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
#define SIZE 128
	char s1[SIZE] = "Hello World";
	char s2[SIZE];
	strcpy(s2, s1); /* 문자열 복사, 11글자만 복사 */
	printf("s2 = %s\n", s2);
	memset(s2, 0, SIZE); /* 배열 초기화 */
	printf("s2 = %s\n", s2);
	memcpy(s2, s1, 5); /* 배열 복사, 128바이트 복사 */
	printf("s2 = %s\n", s2);

	int a = 3;
	int b = 0;

	memcpy(&b, &a, sizeof(int)); /* a = b; */
	printf("b = %d\n", b);
	return 0;
}