void student()
{
	int ch;
	printf("---��ӭͬѧ---\n");
	printf("�޸����룺1\n");
	printf("��ѯ�༶����ѧ���ɼ���2\n");
	printf("��ѯ�༶ָ��ѧ���ɼ���3\n");
	printf("�˳���0\n");
	scanf("%d", &ch);
		if (ch == 1)
		{
			xiuPw();
		}//�޸�����
		else if (ch == 2)
		{
			total();
		}//��ѯ����ѧ���ɼ�
		else if (ch == 3)
		{
			find_score();
		}//��ѯָ��ѧ���ɼ�
		else if (ch == 0)
		{
			exit(0);
		}//�˳�
}
 