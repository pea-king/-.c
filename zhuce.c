#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void zhuce()
{
	USER user[N];
	int i = 0, ch1, ch2;
	do
	{
		printf("�������˺ţ�\n");
		fflush(stdin);
		scanf("%s",&user[i].ID);
		printf("���������룺\n");
		scanf("%s", &user[i].password);
		printf("���������֣�\n");
		scanf("%s", &user[i].name);
		printf("��ѡ���û����ͣ�\n��ʦ��0\nѧ����1\n");
		scanf("%d", &user[i].flag);
		i++;//�����û�ע����Ϣ
		printf("ȷ��ע�᣺0\nȡ��ע�᣺1\n");
		scanf("%d", &ch1);
		if (ch1 == 0)
		{
			save_user(user, i);
			printf("ע��ɹ�\n");
		}
		else
		{
			menu();
		}
		printf("�Ƿ����ע��\n������0\n���أ�1\n");
		scanf("%d", &ch2);
	} while (ch2 ==0);
	menu();
}


