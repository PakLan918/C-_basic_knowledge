#pragma once
#include<string> //C++����ַ�����Ҫ����stringͷ�ļ�


void basic01()
{
	//��������
	// �ؼ���  sizeof(��������/����)  ����ͳ������������ռ�ڴ��С
	//1������   short(2�ֽ�)  int(4�ֽ�)  long(4�ֽ�)  longlong(8�ֽ�)
	//��֤�ֽڿռ�
	short a;
	int b;
	long c;
	atomic_llong g;
	cout << "short��ռ�ֽڣ�" << sizeof(a) << endl;
	cout << "int��ռ�ֽڣ�" << sizeof(b) << endl;
	cout << "long��ռ�ֽڣ�" << sizeof(c) << endl;
	cout << "longlong��ռ�ֽڣ�" << sizeof(g) << endl;

	//2��ʵ��   float(4�ֽ�)  double/longdouble(8�ֽ�)
	//��֤�ֽڿռ�
	float d;
	double e;
	_LONGDOUBLE f;
	cout << "float��ռ�ֽڣ�" << sizeof(d) << endl;
	cout << "double��ռ�ֽڣ�" << sizeof(e) << endl;
	cout << "longdouble��ռ�ֽڣ�" << sizeof(f) << endl;

	//3���ַ�����  ��ʾһ���ַ�      char ռ��1���ַ��ռ�
	string str = "C++����֪ʶ�ع�";  //string����ռ��40���ַ��ռ�
	char cr;
	cout << "string��ռ�ֽڣ�" << sizeof(str) << endl;
	cout << "char��ռ�ֽڣ�" << sizeof(cr) << endl;

	//4����������  bool ռ��1���ַ��ռ�
	bool tar;
	cout << "bool��ռ�ֽڣ�" << sizeof(tar) << endl;
}