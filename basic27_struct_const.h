#pragma once

//�ṹ����constʹ�ó���
//��const����ֹ�����

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
//����һ������������Ҫ��const�������ƣ���ֹ�����
void printStudents(const student* s)
{
	//s->age = 150;  ����const֮��һ�����޸ĵĲ�����ᱨ����ֹ�����
	cout << "������" << s->name << endl;
	cout << "���䣺" << s->age << endl;
	cout <<"������" << s->score << endl;
}

void basic27()
{
	//�����ṹ�����
	student s = { "����",18,70 };

	printStudents(&s);
}