#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char* src = "memset(&i2, 0, sizeof(int));\n		memcpy(((char*)&i2) + 2, ((char*)&i1) + 2, sizeof(int) / 2);\n	"
//"memcpy(&d2, ((char*)&d1) + 4, sizeof(int));	     printf(\"i2 = %d, d2 = %lf\n\", i2, d2);\n	    return 0; ";
//char* src = " \ta";
char* src = "));\n		m";


void* tabtospace(char* src1, const char* src)
{
	while (*src != '\0') {
		if (*src  == '\t')
			*src1 = ' ';
		else
			*src1 = *src;
		src1++;
		src++;
	}
	*src1 = '\0';
}

char* replaceWhiteSpaces(const char* src)
{
	int i, j;
	char* newStr = { 0 };
	
	newStr = malloc(sizeof(char)*strlen(src));

	if (newStr == NULL)
	{
		printf("메모리 할당 실패 \n");
		return -1;
	}
	
	for (i = 0, j = 0; i < strlen(src); i++)
	{
		if (!(*(src + i) == ' '))
			newStr[j++] = *(src + i);
		else if (*(src + i) == ' ')
		{
			if (*(src + i + 1) == ' ')
				continue;
			newStr[j++] = *(src + i);
		}
	}
	newStr[j] = '\0';
	return newStr;
}

int main(void)
{
#define SIZE 256
	char src1[SIZE];

	printf("%s\n", src);

	tabtospace(src1, src);  // '\t' -> ' ' 로 바꾸는 함수
	
	char* newStr = replaceWhiteSpaces(src1); //중복 공백문자 제거함수
	printf("%s\n", newStr);

	free(newStr);
	return 0;
}