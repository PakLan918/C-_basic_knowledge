#pragma once
#include<ctime>


void basic04()
{
	//ѭ���ṹ      дѭ��ʱһ��Ҫ������ѭ��
	//1��whileѭ�����  ֻҪѭ�������Ľ��Ϊ�棬��ִ��ѭ�����
	//�﷨�� while(ѭ������){ѭ�����}
	//���ӣ�
	srand((unsigned int)time(NULL));   //�������������
	int num = rand() % 100 + 60;        //�����������rand()%100 ����0~99�������
	int val = 0;
	//break �ؼ���
	//���ã��˳���ǰѭ��
	while (-5)  //��0���൱���棬����һֱִ��whileѭ��
	{
		cout << "���������²�����֣�" << endl;
		cin >> val;
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С��" << endl;
		}
		else
		{
			cout << "�¶��ˣ�" << endl;
			break;    //��������break�ؼ����˳�ѭ��
		}
	}
}