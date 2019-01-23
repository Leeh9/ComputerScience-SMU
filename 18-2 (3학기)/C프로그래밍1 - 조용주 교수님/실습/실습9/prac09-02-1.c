#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[256];
	char ch;

	printf("문자열 한 개를 입력하세요: ");
	gets(str);
	//printf("str = %s\n", str);
	//printf("length: %d\n", strlen(str));
	//int n = strlen(str);
	//str[n] = '\n';
	//str[n + 1] = '\0';
	//printf("str[%d] = %c\n", strlen(str), str[strlen(str)]);
	scanf("%c", &ch);
	int count = 0;
	//for (int i = 0; i < strlen(str); i++) {
	//	if (str[i] == ch) {
	//		count++;
	//	}
	//}
	//int i = 0;
	//while (str[i] != '\0') {
	//		if (str[i] == ch) {
	//			count++;
	//		}
	//		i++;
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