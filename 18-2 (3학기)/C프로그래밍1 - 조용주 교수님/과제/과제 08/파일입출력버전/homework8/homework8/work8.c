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

	//printf("���ڿ��� ������ �Է��Ͻÿ�:");
	FILE* f = fopen("hello.txt", "rt");
	if (f == NULL)
	{
		printf("������ ���� �����ϴ�.\n");
	}
	fscanf(f,"%d%*c", &size);
	input = (struct ch *)malloc(sizeof(struct ch) * size);

	for (i = 0; i < size; i++) //���ڿ� ����
	{
		//printf("%d��° ���ڿ��� �Է�:",i+1);
		fgets(input[i].str,256,f);
	}

	for (i = 0; i < size; i++) //���ڿ� ���� ����
	{
		input[i].strlong = strlen(input[i].str-1);
	
		printf("����=%d\n", input[i].strlong);
		lensum += input[i].strlong;
	}
	printf("������ ����: %d\n", lensum);

	for (i = 0; i < size; i++) { //�ܾ�� ����
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
		printf("%d��° ���ڿ��� �ܾ��� ����: %d\n",i+1, input[i].strnum);
	}*/
	printf("�ܾ��� �� ����: %d\n", countsum);

	fclose(f);
	free(input);
	return 0;
}