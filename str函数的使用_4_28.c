#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "2231250073@qq.com";
	char p[] = "@.";
	char* s = NULL;
	for (s = strtok(arr, p); s != NULL; s = strtok(NULL, p))
	{
		printf("%s\n", s);
	}
	FILE* pf = fopen("sre.exe", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}