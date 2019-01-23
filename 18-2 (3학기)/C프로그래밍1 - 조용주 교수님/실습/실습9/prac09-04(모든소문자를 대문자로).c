#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ToUpper(int ch)
{
	if (ch >= 'a' && ch <= 'z') {
		return ch - ('a' - 'A');
	}
}

void ChangelToL(char* s, char ch)
{
	int i;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == ch) {
			s[i] = ToUpper(ch);
		}
	}
}

//void ChangelToL(char* s)
//{
//	while (*s != '\0') {
//		if (*s == 'l') {
//			*s = 'L';
//		}
//		s++;
//	}
//}

//void ChangelToL(char* s)
//{
//	int i = 0; 
//	while (s[i] != '\0') {
//		if (s[i] == 'l') {
//			s[i] = 'L';
//		}
//		i++;
//	}
//}

int main(void)
{
	char str[] = "C is a general - purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations.";
	printf("%s\n", str);
	ChangelToL(str, 'a');
	printf("%s\n", str);
	return 0;
}