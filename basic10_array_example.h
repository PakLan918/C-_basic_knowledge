#pragma once


void basic10()
{
	//��ϰ������(1)���������ҳ����ֵ
	int arr[5] = { 300,350,500,400,250 };
	int max = 0;//���϶�һ�����ֵΪ0
	for (int i = 0; i < 5; i++)
	{
		//������ʵ�������Ԫ�ر��϶������ֵҪ����������ֵ
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "���ֵΪ��" << max << endl;

	//��ϰ������(2)����Ԫ������
	//����һ��5��Ԫ�ص����飬���ҽ�Ԫ������
	int arr1[5] = { 1,3,2,5,4 };
	cout << "Ԫ������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << "  ";
	}
	cout << endl;

	int start = 0;//��ʼ�±�
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1; //�����±꣺ Ԫ�ظ��� - 1
	while (start < end)
	{
		int temp = arr1[start];  //��ʱ�����洢
		arr1[start] = arr1[end]; //˫�˽���
		arr1[end] = temp;
		start++;
		end--;
	}

	cout << "Ԫ�����ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << "  ";
	}
	cout << endl;
}