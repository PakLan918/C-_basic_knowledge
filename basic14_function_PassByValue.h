#pragma once


//ֵ���ݣ���������ʱ ʵ�� ����ֵ���ݸ� �βΣ�
//ֵ����ʱ������β� �����ı䣬�� ����Ӱ��ʵ�Ρ�

//�����������Ҫ����ֵ������ʱ����д��void����
void swap(int num1, int num2)           //ֵ����ֻ�ǰ����ݽ��д��ݣ���ַû�з����仯
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

void basic14()
{
	int a = 10;   //ʵ��
	int b = 20;

	swap(a, b);   //�βη����ı� 

	cout << "a = " << a << endl;    //��Ӱ��ʵ��
	cout << "b = " << b << endl;
}