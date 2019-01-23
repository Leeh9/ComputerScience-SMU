#include <stdio.h>

//char* src = "memset(&i2, 0, sizeof(int));\n		memcpy(((char*)&i2) + 2, ((char*)&i1) + 2, sizeof(int) / 2);\n	"
//"memcpy(&d2, ((char*)&d1) + 4, sizeof(int));	     printf(\"i2 = %d, d2 = %lf\n\", i2, d2);\n	    return 0; ";
//char* src = " \ta";
char* src = "));\n		m";

char* replaceWhiteSpaces(const char* src)
{
}

int main(void)
{
	printf("%s\n", src);
	char* newStr = replaceWhiteSpaces(src);
	printf("%s\n", newStr);
	free(newStr);
    return 0;
}