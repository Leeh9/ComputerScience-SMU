#include <stdio.h>

int main(void)
{
	FILE* src = fopen("a.txt", "rt");
	if (src != NULL) {
		FILE* dest = fopen("b.txt", "wt");
		if (dest != NULL) {
			char temp[1024];
			while (1) {
				temp[0] = '\0';
				fgets(temp, 1024, src);
				if (temp[0] != '\0') {
					fputs(temp, dest);
				}
				if (feof(src)) {
					break;
				}
			}
		}
		fclose(src);
		fclose(dest);
	}
	return 0;
}