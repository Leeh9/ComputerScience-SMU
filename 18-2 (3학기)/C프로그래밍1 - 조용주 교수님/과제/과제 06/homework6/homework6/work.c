#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* StrCpy(char* destination, const char* source)
{
	for (int i = 0; ; i++)
	{
		destination[i] = source[i];
		if (source[i] == '\0')
			return destination;
	}
}

void* MemCpy(void* destination, const void* source,
	size_t num)
{
	char* newdest = (char*)destination;
	char* newsou = (char*)source;
	for (int i = 0; i < num; i++)
		newdest[i] = newsou[i];
	return destination;
}

void* MemSet(void* ptr, int value, size_t num)
{
	void* temp = ptr;
	for (int i = 0; i < num; i++)
		*((char*)temp + i) = value;
	return ptr;
}

int main(void)
{
#define SIZE 128
	char s1[SIZE] = "Hello World";
	char s2[SIZE];
	StrCpy(s2, s1);
	printf("s2 = %s\n", s2);
	MemSet(s2, 0, SIZE);
	printf("s2 = %s\n", s2);
	MemCpy(s2, s1, 5);
	printf("s2 = %s\n", s2);

	int a = 3;
	int b = 0;

	MemCpy(&b, &a, sizeof(int));
	printf("b = %d\n", b);
	return 0;
}