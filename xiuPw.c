#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
int xiuPw()
{
	int n;
	USER user[N];
	n = read_user(user);
	char password[20];
	char password1[20];
	int  i, j, q = n;
	FILE* fp;
	char temp[20], temp1[20];
	int ftemp, ftemp1, ftemp2;
	fp = fopen("user1.txt", "wb+");
	printf("�޸�ǰΪ��\n");
	user1();
	printf("������Ҫ�޸ĵ����룺\n");
	scanf("%s", &password);
	for (i = 0; i < n; i++)
	{
		if (strcmp(user[i].password, password) == 0)
		{
			printf("�����������룺\n");
			scanf("%s", &password1);
			user[i].ID;
			strcpy(user[i].password, password1);
			user[i].name;
			user[i].flag;
		}
	}
	printf("�޸ĺ���Ϊ��\n");
	for (i = 0; i < n; i++)
	{
		printf("%s  %s  %s  %d\n", user[i].ID, user[i].password, user[i].name, user[i].flag);
	}
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%s  %s  %s  %d\n", user[i].ID, user[i].password, user[i].name, user[i].flag);
	}
	n = q;
	fclose(fp);
	FILE* ft;
	ft = fopen("score.txt", "rb+");
	for (i = 0; !feof(fp); i++)
	{
		fscanf(ft, "%s  %s  %s  %d", user[i].ID, user[i].password, user[i].name, &user[i].flag);
	}
	fclose(ft);
	remove("user.txt");
	rename("user1.txt", "user.txt");
	printf("�޸ĳɹ�\n");
	int ch;
	printf("���ز˵���0\n�˳���1\n");
	scanf("%d", &ch);
	if (ch == 0)
	{
		menu();
	}
	else if (ch == 1)
	{
		exit(0);
	}
	return 0;
}


