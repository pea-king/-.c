typedef struct user
{
	char ID[20];//�˺�
	char password[20];//����
	char name[20];//����
	int flag;//��ʦ��0��ѧ����1
}USER;
typedef struct score
{
	char studentID[20];//ѧ��
	char name[20];//����
	int chinese;//��Ŀ�ɼ�
	int math;
	int english;
	float aver;//ƽ����
	int total;//��Ŀ�ܳɼ�
}SCORE;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void zhuce();//ע��
void menu();//�˵�
void logic();//��¼
void save_user(USER user[], int n);//�洢�û���Ϣ
int read_user(USER user[]);//���û���Ϣ
int xiuPw();//�޸ĵ�¼����
void teacher();//��ʦҳ��
void student();//ѧ��ҳ��
int read_score(SCORE score[]);//��ѧ���ɼ���Ϣ
void save_score(SCORE score[], int n);//�洢ѧ���ɼ���Ϣ
void increase();//��ʦ��score.txt�����ѧ���ɼ���Ϣ
void total();//��ѯ����ѧ���ɼ���Ϣ������
void find_score();//ͨ��ѧ�Ż�������ѯѧ���ɼ���Ϣ��ƽ���֣��ܷ�
int delete();//ɾ��
void sort();//��ѧ������     
int xiuscore();//�޸�ѧ���ɼ���Ϣ
void total1();//���ѧ���ɼ���Ϣ
void user1();//����û���Ϣ
