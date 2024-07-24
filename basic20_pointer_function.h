#pragma once


//值传递    不可修改实参
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//地址传递   可以修饰实参
void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


void basic20()
{
	int a = 10;
	int b = 20;
	cout << "交换之前：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap01(a, b);
	cout << "值传递后：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap02(&a, &b);
	cout << "地址传递后：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}