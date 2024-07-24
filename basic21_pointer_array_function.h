#pragma once

//封装冒泡排序函数
//数组名 就是数组的 首地址
void bubblesort(int* arr, int len)   //len为数组长度
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

//封装数组输出函数
void printArray(int* arr, int len)  //数组首地址，数组长度
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
	int len = sizeof(arr) / sizeof(arr[0]);  //数组长度      
	bubblesort(arr, len);                    //调用冒泡排序函数
	printArray(arr, len);                    //调用数组输出函数
}