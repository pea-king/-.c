#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void increase()
{
	SCORE score[N];
	int i = 0, ch1,ch2;
	printf("���ǰΪ��\n");
	total1();
	do {
		printf("������ѧ�ţ�\n");
		fflush(stdin);
		scanf("%s", &score[i].studentID);
		printf("������������\n");
		scanf("%s", &score[i].name);
		printf("���������ĳɼ���\n");
		scanf("%d", &score[i].chinese);
		printf("��������ѧ�ɼ���\n");
		scanf("%d", &score[i].math);
		printf("������Ӣ��ɼ���\n");
		scanf("%d", &score[i].english);
		i++;
		printf("ȷ�����룺0\nȡ�����룺1\n");
		scanf("%d", &ch1);
		if (ch1 == 0)
		{
			save_score(score, i);
			printf("����ɹ�\n");
		}
		printf("��Ӻ�Ϊ��\n");
		total1();
		printf("�Ƿ�������룺\n������0\n���أ�1\n");
		scanf("%d",&ch2);
	} while (ch2 == 0);
}

