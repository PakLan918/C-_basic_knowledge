#pragma once


//ֵ����    �����޸�ʵ��
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//��ַ����   ��������ʵ��
void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


void basic20()
{
	int a = 10;
	int b = 20;
	cout << "����֮ǰ��" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap01(a, b);
	cout << "ֵ���ݺ�" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap02(&a, &b);
	cout << "��ַ���ݺ�" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}