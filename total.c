#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void total()
{
	int n;
	SCORE score[N];
	n = read_score(score);
	FILE* fp = fopen("score.txt", "r");
	int i=0;
	getchar();
	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		exit(0);
	}
	for (i = 0; !feof(fp); i++)
	{
		fscanf(fp, "%s  %s  %d  %d  %d",
			score[i].studentID, score[i].name, &score[i].chinese,
			&score[i].math, &score[i].english);
	}
	for (i = 0; i <n; i++)
	{
		printf("ѧ�ţ�%s  ������%s  ���ģ�%d  ��ѧ��%d  Ӣ�%d\n",
			score[i].studentID, score[i].name, score[i].chinese,
			score[i].math, score[i].english);
	}
	sort();
	fclose(fp);
	int ch;
	printf("���ز˵���0\n�˳���1\n");
	scanf("%d", &ch);
	if (ch == 0)
	{
		teacher();
	}
	else if (ch == 1)
	{
		exit(0);
	}
}


