#pragma once



void basic11()
{
	//ð������ ��õ������㷨��������Ԫ������
	//��������
	int arr[10] = { 1,3,2,4,5,4,6,8,10,7 };
	cout << "ð������ǰ: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	//ð���㷨
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)           //Ԫ����Ŀ��sizeof(arr) / sizeof(arr[0])
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++)   //����������i
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];       //������ʱ����������Ԫ������
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
			
	cout << "ð�������: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}