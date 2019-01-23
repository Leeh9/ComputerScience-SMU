#include <stdio.h>
#include <string.h>

void WriteBackward(char* s, int size)
{
	if (size <= 0) {
		return;
	}
	WriteBackward(s + 1, size - 1);
	printf("%c", *s);
}

void WriteBackward2(char* s)
{ 
	if (*s == '\0') {
		return;
	}
	WriteBackward2(s + 1);
	printf("%c", *s);
}

int main(void)
{
	char str[] = "Hello World";
	//"C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations.";
	WriteBackward(str, strlen(str));
	printf("\n");
	WriteBackward2(str, strlen(str));
	printf("\n");
	return 0;
}