#pragma once



void basic11()
{
	//冒泡排序 最常用的排序算法，对数组元素排序
	//创建数组
	int arr[10] = { 1,3,2,4,5,4,6,8,10,7 };
	cout << "冒泡排序前: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	//冒泡算法
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)           //元素数目：sizeof(arr) / sizeof(arr[0])
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++)   //排序轮数：i
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];       //创建临时变量来交换元素数据
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
			
	cout << "冒泡排序后: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}