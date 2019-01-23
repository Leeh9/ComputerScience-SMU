#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* MemCpy(void* destination, const void* source, size_t num);

char* StrCpy(char* destination, const char* source)
{
	printf("sizeof(destination) = %d\n", sizeof(destination));
	int len = strlen(source);
	MemCpy(destination, source, len + 1);
}

//char* StrCpy(char* destination, const char* source)
//{
//	int len = strlen(source);
//	int i;
//	for (i = 0; i < len + 1; i++) {
//		destination[i] = source[i];
//	}
//}

//char* StrCpy(char* destination, const char* source)
//{
//	int i;
//	while (*source != '\0') {
//		*destination = *source;
//		destination++;
//		source++;
//	}
//	*destination = '\0';
//}

void* MemCpy(void* destination, const void* source, size_t num)
{
	char* sp = (char*)source;
	char* dp = (char*)destination;
	int i;
	for (i = 0; i < num; i++) {
		dp[i] = sp[i];
	}
	return dp;
}

void* MemSet(void* ptr, int value, size_t num)
{
	char* p = (char*)ptr;
	int i;
	for (i = 0; i < num; i++) {
		p[i] = value;
	}
	return ptr;
}

int main(void)
{
#define SIZE 128
	char s1[SIZE] = "Hello World";
	char s2[SIZE];
	printf("sizeof(s2) = %d\n", sizeof(s2));

	StrCpy(s2, s1); /* 문자열 복사, 11글자만 복사 */
	printf("s2 = %s\n", s2);
	MemSet(s2, 0, SIZE); /* 배열 초기화 */
	printf("s2 = %s\n", s2);
	MemCpy(s2, s1, 5); /* 배열 복사, 128바이트 복사 */
	printf("s2 = %s\n", s2);

	int a = 3;
	int b = 0;

	MemCpy(&b, &a, sizeof(int)); /* a = b; */
	printf("b = %d\n", b);
	//MemSet(&b, 0, sizeof(int));
	////b = 0;
	//printf("b = %d\n", b);
	return 0;
}