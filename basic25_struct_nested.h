#pragma once

//�ṹ��Ƕ�׽ṹ��
//�ṹ���Ա ������ ��һ���ṹ��
//�ڽṹ���У����ǿ��Զ�����һ���ṹ������Ϊ��Ա���������õؽ��ʵ������

void basic25()
{
	//�ȶ���ѧ���ṹ��
	struct Student
	{
		string name;
		int age;
		int score;
	};

	//�ٶ���Ƕ����ѧ���ṹ��Ľ�ʦ�ṹ��
	struct Teacher
	{
		string name;
		int id;
		int age;
		Student stu;
	};

	//������ʦ
	Teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 28;
	t.stu.score = 85;

	//�����ʦ��Ϣ
	cout << "��ʦ������ " << t.name << endl;
	cout << "��ʦ��ţ� " << t.id << endl;
	cout << "��ʦ���䣺 " << t.age << endl;
	cout << "��ʦ����ѧ�������� " << t.stu.name << endl;
	cout << "ѧ�����䣺 " << t.stu.age << endl;
	cout << "ѧ�����Է����� " << t.stu.score << endl;
}