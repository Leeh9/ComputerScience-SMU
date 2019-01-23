#include <stdio.h>

#define SIZE 256

int main(void)
{
	char str[SIZE];
	gets(str);
	printf("%s\n", str);
	char ch;
	scanf("%c", &ch);
	int count = 0;
	//for (int i = 0; i < strlen(str); i++) {
	//	if (str[i] == ch) {
	//		count++;
	//	}
	//}
	//int i = 0;
	//while (i < strlen(str)) {
	//	if (str[i] == ch) {
	//		count++;
	//	}
	//	i++;
	//}
	char* p = str;
	while (*p != '\0') {
			if (*p == ch) {
				count++;
			}
			p++;
	}
	printf("count = %d\n", count);
	return 0;
}