#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 256

typedef struct {
	char str[MAX_LEN]; /* ���ڿ� */
	int length;  /* ���ڿ��� ���� */
	int numWords; /* �ܾ� ���� */
} STRING_DATA;

int getNumWords(const char* str)
{
	int count = 0;
	char temp[MAX_LEN];
	strcpy(temp, str);
//	char* temp = strdup(str);
//	printf("temp = %s\n", temp);
//	free(temp);

	char* p = strtok(temp, " \t\n");
	while (p) {
		count++;
		p = strtok(NULL, " \t\n");
	}
	return count;
}

//int main(void)
//{
//	int n;
//	int i;
//	int sumLength = 0;
//	int sumNumWords = 0;
//
//	// �Է� �ޱ�
//	printf("�� ���� ���ڿ��� �Է��մϱ�? ");
//	scanf("%d", &n);
//	getchar();
//	//char temp[10];
//	//gets(temp, 10);
//	STRING_DATA* arr = (STRING_DATA*)malloc(sizeof(STRING_DATA)* n);
////	gets(arr[0].str, MAX_LEN);
//
//	for (i = 0; i < n; i++) {
//		gets(arr[i].str, MAX_LEN);
//	}
//	//for (i = 0; i < n; i++) {
//	//	printf("%d: %s\n", i, arr[i].str);
//	//}
//
//	// ���ڿ� ���� ���ϱ�
//	for (i = 0; i < n; i++) {
//		arr[i].length = strlen(arr[i].str);
//	}
//	//for (i = 0; i < n; i++) {
//	//	printf("length %d: %s\n", arr[i].length, arr[i].str);
//	//}
//
//
//	// �ܾ� ���� ����
//	for (i = 0; i < n; i++) {
//		arr[i].numWords = getNumWords(arr[i].str);
//	}
//
//	// ���
//	for (i = 0; i < n; i++) {
//		sumLength += arr[i].length;
//		sumNumWords += arr[i].numWords;
//	}
//	for (i = 0; i < n; i++) {
//		printf("length %d: numWords %d: %s\n", arr[i].length, arr[i].numWords, arr[i].str);
//	}
//	printf("sumLength: %d\nsumNumWords: %d\n", sumLength, sumNumWords);
//  free(arr);
//	return 0;
//}

int main(void)
{
	int n;
	int i;
	int sumLength = 0;
	int sumNumWords = 0;

	FILE* f = fopen("data.txt", "rt");
	if (f == NULL) {
		printf("������ �� �� �����ϴ�.\n");
	}
	// �Է� �ޱ�
	fscanf(f, "%d", &n);
	fgetc(f);

	STRING_DATA* arr = (STRING_DATA*)malloc(sizeof(STRING_DATA)* n);

	for (i = 0; i < n; i++) {
		fgets(arr[i].str, MAX_LEN, f);
		//if (arr[i].str[strlen(arr[i].str) - 1] == '\n')
		//	arr[i].str[strlen(arr[i].str) - 1] = '\0';
		arr[i].length = strlen(arr[i].str);
		arr[i].numWords = getNumWords(arr[i].str);
		sumLength += arr[i].length;
		sumNumWords += arr[i].numWords;
	}
	//for (i = 0; i < n; i++) {
	//	printf("length %d: numWords %d: %s\n", arr[i].length, arr[i].numWords, arr[i].str);
	//}
	printf("sumLength: %d\nsumNumWords: %d\n", sumLength, sumNumWords);
	fclose(f);
	free(arr);
	return 0;
}