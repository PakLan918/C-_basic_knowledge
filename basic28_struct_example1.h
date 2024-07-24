#pragma once

//�ṹ�尸��1��
//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա���������������Է���������������3����ʦ��ͨ��������ÿ����ʦ�Լ�������ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ������

//����ѧ���ṹ��
struct Student
{
	string sName;  //����  
	int score;     //����
};

//������ʦ�ṹ��
struct Teacher
{
	string tName;       //����
	Student sArray[5];  //ѧ������
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(Teacher tArray[], int len)
{
	//����С����
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)  //����ʦ��ʼ��ֵ
	{
		//��i����ʦ
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameseed[i];
		for (int j = 0; j < 5; j++)    //��ѧ����ʼ��ֵ
		{
			int random = rand() % 61 + 40;
			//��i����ʦ�ĵ�j��ѧ��
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameseed[j];
			tArray[i].sArray[j].score = random;
		}
	}

}

//����ʦ��ѧ����ӡ��Ա���Եĺ���
void printInfo(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		//��i����ʦ
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "ѧ��������" << tArray[i].sArray[j].sName << endl;   //��i����ʦ�ĵ�j��ѧ��
			cout << "ѧ���ɼ���" << tArray[i].sArray[j].score << endl;
		}
	}
}


void basic28()
{
	srand((unsigned int)time(NULL));   //���������
	Teacher tArray[3];                 //����3����ʦ������
	int len = sizeof(tArray) / sizeof(tArray[0]);  //��ʦ���鳤��
	//ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����ֵ
	allocateSpace(tArray, len);
	printInfo(tArray, len);

}