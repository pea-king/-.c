#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
void save_user(USER user[], int n)
{
	FILE* fp = fopen("user.txt", "a+");
	int i;
	if (fp == NULL)
	{
		printf("�ļ�����ʧ��\n");
		exit(0);
	}
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%s  %s  %s  %d\n", user[i].ID, user[i].password,user[i].name,user[i].flag);
	}
	fclose(fp);
}





