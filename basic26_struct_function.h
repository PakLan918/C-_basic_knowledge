#pragma once

//�ṹ����Ϊ��������
//���ṹ����Ϊ���������д���
//���ݷ�ʽ��1��ֵ���ݣ�2����ַ����

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

//ֵ����
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "�Ӻ���1��������" << s.name << endl;
	cout << "���䣺" << s.age << endl;
	cout << "������" << s.score << endl;
}

//��ַ����
void printStudent2(struct student* p)
{
	p->age = 200;    //��ַ���ݻ�ʹ���Ӻ������������������仯
	p->name = "����";
	p->score = 100;
	cout << "�Ӻ���2��������" << p->name << endl;
	cout << "���䣺" << p->age << endl;
	cout << "������" << p->score << endl;
}

void basic26()
{
	//�����ṹ�����
	student s;
	s.name = "����";
	s.age = 18;
	s.score = 90;

	//ֵ����
	printStudent1(s);
	cout << "ֵ���ݺ���������������" << s.name << endl;
	cout << "���䣺" << s.age << endl;
	cout << "������" << s.score << endl;

	//��ַ����
	printStudent2(&s);
	cout << "��ַ���ݺ���������������" << s.name << endl;
	cout << "���䣺" << s.age << endl;
	cout << "������" << s.score << endl;

	//ֵ���ݲ���Ӱ��ʵ�Σ�����ַ���ݿ�������ʵ��
}








