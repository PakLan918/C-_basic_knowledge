#pragma once


void basic16()
{
	//ָ�루ָ����ǵ�ַ��
	//�ڴ����Ǵ�0��ʼ��¼�ģ�һ���� ʮ�������� ����ʾ
	//�������� ָ����� �����ַ��

	//1�����壺
	//�﷨���������� *ָ�������
	int* p;         //����һ��ָ�����
	int a = 10;
	p = &a;         //��¼����a�ĵ�ַ
	//����ͨ�� ������ �ķ�ʽ���ҵ� ָ��ָ����ڴ档
	*p = 1000;      //ָ��ǰ�� * ���� �����ã��ҵ�ָ��ָ���ڴ��е����ݣ�Ҳ����ͨ�� ������ ����޸�����

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	//2��ָ����ռ�ڴ�ռ�
	//�� 32λ����ϵͳ �£�ռ��4���ֽ�,������ʲô�������ͣ�
	//�� 64λ����ϵͳ �£�ռ��8���ֽڣ�������ʲô�������ͣ�
	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;
	cout << "sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;
	cout << "sizeof(string *) = " << sizeof(string*) << endl;
}
