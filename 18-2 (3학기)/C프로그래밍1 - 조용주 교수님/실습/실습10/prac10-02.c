#include <stdio.h>
#include <string.h>

#define MAX_LEN 20
#define MAX_WORDS 10

typedef struct {
	char word[MAX_LEN];
	int sum;
} WORD;

//int calcSum(const char* word)
//{
//	int sum = 0;
//	int len = strlen(word);
//	for (int i = 0; i < len; i++) {
//		sum += word[i];
//	}
//	return sum;
//}

int calcSum(const char* word)
{
	int sum = 0;
	char* p = (char*) word;
	while (*p != '\0') {
		sum += (int)*p;
		p++;
	}
	return sum;
}

int main(void)
{
	/*
	0. ����ü ����
	1. ���� ����
	2, 3���� 10�� �ݺ�
		2. �ܾ� �Է�
		3. �ƽ�Ű �ڵ��� �հ� ���
	4���� 10�� �ݺ�
		4. ���
	*/
	//WORD words[MAX_WORDS];
	WORD w;
	scanf("%s", w.word);
	w.sum = calcSum(w.word);
	printf("Word: %s\tsum = %d\n", w.word, w.sum);
	return 0;
}