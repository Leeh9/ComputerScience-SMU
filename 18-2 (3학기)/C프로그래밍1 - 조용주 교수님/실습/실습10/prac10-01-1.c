#include <stdio.h>

#define MAX_LEN 256

// 방법 1
//int main(void)
//{
//	char str[MAX_LEN];
//	char word[MAX_LEN];
//	char* p = NULL;
//	char* q = NULL;
//	int index = 0;
//	printf("문장을 입력하세요: \n");
//	gets(str, MAX_LEN);
//	printf("str = %s\n", str);
//	p = str;
//	q = word;
//	while (1) {
//		if (*p == '\0') {
//			*q = '\0';
//			printf("%s\n", word);
//			break;
//		}
//		else if (*p != ' ' && *p != '\t' && *p != '\n') {
//			*q = *p;
//		}
//		else { /* 공백문자일 때 */
//			*q = '\0';
//			printf("%s\n", word);
//			p++;
//			q = word;
//			continue;
//		}
//		q++;
//		p++;
//	}
//	return 0;
//}

// 방법 2
//int main(void)
//{
//	char str[MAX_LEN];
//	char* p = NULL;
//	char* q = NULL;
//	int index = 0;
//	printf("문장을 입력하세요: \n");
//	gets(str, MAX_LEN);
//	printf("str = %s\n", str);
//	p = str;
//	q = str;
//	while (1) {
//		if (*p == '\0') {
//			printf("%s\n", q);
//			break;
//		}
//		else if (*p != ' ' && *p != '\t' && *p != '\n') {
//			p++;
//		}
//		else { /* 공백문자일 때 */
//			*p = '\0';
//			printf("%s\n", q);
//			p++;
//			q = p;
//		}
//	}
//	return 0;
//}

// 방법 3
int main(void)
{
	char str[MAX_LEN];
	char* p = NULL;
	char* q = NULL;
	int index = 0;
	printf("문장을 입력하세요: \n");
	gets(str, MAX_LEN);
	printf("str = %s\n", str);

	q = strtok(str, " \t\n");
	while (q) {
		printf("%s\n", q);
		q = strtok(NULL, " \t\n");
	}
	return 0;
}