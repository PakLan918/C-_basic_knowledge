#pragma once

//��װð��������
//������ ��������� �׵�ַ
void bubblesort(int* arr, int len)   //lenΪ���鳤��
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//��װ�����������
void printArray(int* arr, int len)  //�����׵�ַ�����鳤��
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}


void basic21()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);  //���鳤��      
	bubblesort(arr, len);                    //����ð��������
	printArray(arr, len);                    //���������������
}