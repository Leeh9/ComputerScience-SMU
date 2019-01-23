#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ch{
	char str[256];
	int strlong;
	int strnum;
};	

int main(void)
{
	struct ch *input;
	int size;
	int i;
	int j;
	int lensum = 0;
	int count = 1;
	int countsum = 0;
	char* letter;

	//printf("문자열의 개수를 입력하시오:");
	FILE* f = fopen("hello.txt", "rt");
	if (f == NULL)
	{
		printf("파일을 열수 없습니다.\n");
	}
	fscanf(f,"%d%*c", &size);
	input = (struct ch *)malloc(sizeof(struct ch) * size);

	for (i = 0; i < size; i++) //문자열 저장
	{
		//printf("%d번째 문자열을 입력:",i+1);
		fgets(input[i].str,256,f);
	}

	for (i = 0; i < size; i++) //문자열 길이 저장
	{
		input[i].strlong = strlen(input[i].str-1);
	
		printf("길이=%d\n", input[i].strlong);
		lensum += input[i].strlong;
	}
	printf("길이의 총합: %d\n", lensum);

	for (i = 0; i < size; i++) { //단어개수 저장
		for (j = 0; j < strlen(input[i].str); j++) {
			if ((input[i].str)[j] == ' ' || (input[i].str)[j] == '\t' || (input[i].str)[j] == '\n')
			{
				if ((input[i].str)[j + 1] == ' ' || (input[i].str)[j + 1] == '\t' || (input[i].str)[j + 1] == '\n' || (input[i].str)[j + 1] == '\0')
					continue;
				count++;
			}
		}
		input[i].strnum = count;
		countsum += count;
		count = 1;
	}
	/*for (i = 0; i < size; i++) {
		printf("%d번째 문자열의 단어의 개수: %d\n",i+1, input[i].strnum);
	}*/
	printf("단어의 총 개수: %d\n", countsum);

	fclose(f);
	free(input);
	return 0;
}