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
	0. 구조체 선언
	1. 변수 정의
	2, 3번이 10번 반복
		2. 단어 입력
		3. 아스키 코드의 합계 계산
	4번을 10번 반복
		4. 출력
	*/
	//WORD words[MAX_WORDS];
	WORD w;
	scanf("%s", w.word);
	w.sum = calcSum(w.word);
	printf("Word: %s\tsum = %d\n", w.word, w.sum);
	return 0;
}