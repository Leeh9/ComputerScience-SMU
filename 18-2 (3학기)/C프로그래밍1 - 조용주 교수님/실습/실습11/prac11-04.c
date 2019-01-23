#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 256
typedef struct {
	int type; /* 0 Media, 1 File */
	char name[MAX_LEN];
	char korName[MAX_LEN];
	char director[MAX_LEN];
	char stars[MAX_LEN];
	int year;
	char subtitle[MAX_LEN];
	char fileName[MAX_LEN];
	int resolutionType; /* 0 SD 1 HD 2 FHD */
} MOVIE_DATA;

void removeNewLineChar(char* str)
{
	if (str[strlen(str) - 1] == '\n') {
		str[strlen(str) - 1] = '\0';
	}
}

char* FGets(char* str, int len, FILE* f)
{
	fgets(str, len, f);
	removeNewLineChar(str);
	return str;
}

void printMovieData(const MOVIE_DATA* data)
{
	printf("Type: %d\n", data->type);
	printf("Name: %s\n", data->name);
	printf("KorName: %s\n", data->korName);
	printf("Director: %s\n", data->director);
	printf("Stars: %s\n", data->stars);
	printf("Year: %d\n", data->year);
	printf("Subtitle: %s\n", data->subtitle);
	printf("FileName: %s\n", data->fileName);
	printf("ResolutionType: %d\n", data->resolutionType);
}

int searchMovieData(const MOVIE_DATA* data, const char* str) {
	if (strstr(data->director, str) != NULL)
		return 1;
	if (strstr(data->fileName, str) != NULL)
		return 1;
	if (strstr(data->korName, str) != NULL)
		return 1;
	if (strstr(data->name, str) != NULL)
		return 1;
	if (strstr(data->stars, str) != NULL)
		return 1;
	if (strstr(data->subtitle, str) != NULL)
		return 1;
	return 0;
}

void readMovieData(MOVIE_DATA* data, FILE* f)
{
	char temp[MAX_LEN];

	//removeNewLineChar(fgets(temp, MAX_LEN, f));
	FGets(temp, MAX_LEN, f);
	if (strcmp(temp, "File") == 0) {
		data->type = 1;
	}
	else if (strcmp(temp, "Media") == 0) {
		data->type = 0;
	}
	else {
		printf("invalid type\n");
	}

	FGets(data->name, MAX_LEN, f);
	FGets(data->korName, MAX_LEN, f);
	FGets(data->director, MAX_LEN, f);
	FGets(data->stars, MAX_LEN, f);
	fscanf(f, "%d", &(data->year));
	fgetc(f); // 줄바꿈문자 제거용
	FGets(data->subtitle, MAX_LEN, f);
	FGets(data->fileName, MAX_LEN, f);
	FGets(temp, MAX_LEN, f);
	if (strcmp(temp, "SD") == 0) {
		data->resolutionType = 0;
	}
	else if (strcmp(temp, "HD") == 0) {
		data->resolutionType = 1;
	}
	else if (strcmp(temp, "FHD") == 0) {
		data->resolutionType = 2;
	}
	else {
		printf("invalid resolution type\n");
	}
}

int main(void)
{
	MOVIE_DATA* arr;
	int n;
	char temp[MAX_LEN];
	int i;

	FILE* f = fopen("MovieMedia.data", "rt");
	if (f != NULL) {
		fscanf(f, "%d", &n);
		fgetc(f);// 줄바꿈문자 제거용
		arr = (MOVIE_DATA*) malloc(sizeof(MOVIE_DATA) * n);

		for (i = 0; i < n; i++) {
			readMovieData(&(arr[i]), f);
		}

		fclose(f);

		// 문자열 입력
		char temp[MAX_LEN];
		scanf("%s", temp);
		int found = 0;
		for (i = 0; i < n; i++) {
			if (searchMovieData(&(arr[i]), temp)) {
				printMovieData(&(arr[i]));
				found = 1;
			}
		}
		if (found == 0) {
			printf("not found\n");
		}
		free(arr);
	}
	return 0;
}