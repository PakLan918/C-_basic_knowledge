#pragma once

//�ṹ��ָ��
//ͨ��ָ����ʽṹ��ĳ�Ա
//���� -> ����������ͨ���ṹ��ָ����ʽṹ������

void basic24()
{
	//����ṹ�����
	struct Student
	{
		string name;
		int age;
		int score;
	};

	//����ѧ���ṹ�����
	Student s = { "����",18,88 };

	//ͨ��ָ��ָ��ṹ�����
	Student* p = &s;

	//ͨ��ָ����ʽṹ������е�����
	cout << "������ " << p->name << endl;
	cout << "���䣺 " << p->age << endl;
	cout << "������ " << p->score << endl;
	//ͨ���ṹ��ָ����ʽṹ���еĳ�Ա���ԣ���Ҫ�� ->

}