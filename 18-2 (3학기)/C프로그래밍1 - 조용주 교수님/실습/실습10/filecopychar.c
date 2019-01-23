#include <stdio.h>

int main(void) 
{
	FILE* src = fopen("a.txt", "rt");
	if (src) {
		char ch;
		FILE* dest = fopen("b.txt", "wt");
		while (1) {
			if (dest) {
				ch = fgetc(src);
				if (feof(src)) {
					break;
				}
				fputc(ch, dest);
			}
		}
		fclose(src);
		fclose(dest);
	}
	else {
		printf("file not found\n");
	}
}

	