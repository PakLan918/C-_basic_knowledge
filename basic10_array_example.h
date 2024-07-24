#pragma once


void basic10()
{
	//练习案例：(1)在数组中找出最大值
	int arr[5] = { 300,350,500,400,250 };
	int max = 0;//先认定一个最大值为0
	for (int i = 0; i < 5; i++)
	{
		//如果访问的数组中元素比认定的最大值要大，则更新最大值
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "最大值为：" << max << endl;

	//练习案例：(2)数组元素逆置
	//声明一个5个元素的数组，并且将元素逆置
	int arr1[5] = { 1,3,2,5,4 };
	cout << "元素逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << "  ";
	}
	cout << endl;

	int start = 0;//起始下标
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1; //结束下标： 元素个数 - 1
	while (start < end)
	{
		int temp = arr1[start];  //临时变量存储
		arr1[start] = arr1[end]; //双端交换
		arr1[end] = temp;
		start++;
		end--;
	}

	cout << "元素逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << "  ";
	}
	cout << endl;
}