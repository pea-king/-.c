void teacher()
{
	int ch;
	printf("---��ӭ��ʦ---\n");
	printf("�޸����룺1\n");
	printf("��ѯ�༶����ѧ���ɼ���2\n");
	printf("��ѯ�༶ָ��ѧ���ɼ���3\n");
	printf("�޸�ѧ���ɼ���4\n");
	printf("ɾ��ѧ���ɼ���5\n");
	printf("����ѧ���ɼ���Ϣ��6\n");
	printf("�˳���0\n");
	scanf("%d", &ch);
	if (ch == 1)
	{
		xiuPw();
	}//�޸�����
	else if(ch == 2)
	{
		total();
	}//�鿴����ѧ���ɼ�
	else if(ch == 3)
	{
		find_score();
	}//�鿴ָ��ѧ���ɼ�
	else if (ch == 4)
	{
		xiuscore();
	}//�޸�ѧ���ɼ�
	else if (ch == 5)
	{
		delete();
	}//ɾ��ѧ���ɼ�
	else if (ch == 6)
	{
		increase();
	}//����ѧ���ɼ�
	else if (ch == 0)
	{
		exit(0);
	}//�˳�
}