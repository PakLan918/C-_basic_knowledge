#pragma once



void basic19()
{
	//指针和数组
	//利用 指针 访问数组中的元素
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;   //指向数组的指针
	cout << "第一个元素：" << arr[0] << endl;      //常规访问
	cout << "指针访问第一个元素：" << *p<< endl;  //指针访问

	//利用指针遍历数组
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *p << endl;
		p++;
	}
}