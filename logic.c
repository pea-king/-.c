#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void logic()
{
	char ID[20];//�˺�
	char password[20];//����
	USER user[N];
	int i, n, count = 0, result = 0;
	n = read_user(user);
	do 
	{
		printf("������ѧ�ţ�\n");
		fflush(stdin);
		scanf("%s", &ID);//����˺�
		printf("���������룺\n");
		scanf("%s", &password);//�������
		count++;
		for (i = 0 ; i < n; i++)
		{
			if (strcmp(user[i].ID, ID) == 0 && strcmp(user[i].password, password) == 0 && count < 3)
			{
				printf("��½�ɹ�\n");
				result = 1;
				if (user[i].flag == 0)
					teacher();
				else
					student();
				break;
			}
		}
		if (i >= n && count < 3)
		{
			printf("������󣬻���%d�λ���\n",3 - count);
		}
		else if (count >= 3)
		{
			printf("����������࣬û�л�����\n");
			exit(0);
		}
	} while (result == 0 && count < 3);
}


