#pragma once



void basic19()
{
	//ָ�������
	//���� ָ�� ���������е�Ԫ��
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;   //ָ�������ָ��
	cout << "��һ��Ԫ�أ�" << arr[0] << endl;      //�������
	cout << "ָ����ʵ�һ��Ԫ�أ�" << *p<< endl;  //ָ�����

	//����ָ���������
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *p << endl;
		p++;
	}
}