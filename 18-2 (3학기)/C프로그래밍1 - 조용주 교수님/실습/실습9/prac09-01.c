#include <stdio.h>
#include <string.h>

void WriteBackward(char* s, int size) 
{
	int i;
	for (i = size - 1; i >= 0; i--) {
		printf("%c", s[i]);
	}
	printf("\n");
}

void WriteBackward2(char* s)
{
	//int count = 0;
	//while (s[count] != '\0') {
	//	count++;
	//}
//	printf("count = %d\n", count);
	WriteBackward(s, strlen(s));
}

int main(void)
{
	char str[] = "C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations.";
	WriteBackward(str, strlen(str));
	
	return 0;
}