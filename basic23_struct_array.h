#pragma once

//�ṹ������
//���Զ���Ľṹ����뵽�����з���ά��
//�﷨��struct �ṹ���� ������[Ԫ�ظ���]={{ },{ },{ },......};


void basic23()
{
	//���ӣ�
	//����ṹ��
	struct Student
	{
		string name;  //Ҫ��string����ʵ������Ҫ���#include<string>�ģ���������main���Ѿ���������Բ�����ӷ�ֹ�ظ���������
		int age;
		int score;
	};

	//�����ṹ������
	struct Student stuArray[3] =
	{
		{"����",18,90},
		{"����",20,85},
		{"����",24,100}
	};


	//�ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 22;
	stuArray[2].score = 70;

	//�����ṹ������
	for (int i = 0; i < sizeof(stuArray) / sizeof(stuArray[0]); i++)
	{
		cout << "������ " << stuArray[i].name << endl;
		cout << "���䣺 " << stuArray[i].age << endl;
		cout << "������ " << stuArray[i].score << endl;
	}
}