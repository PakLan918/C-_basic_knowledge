#pragma once


//值传递（函数调用时 实参 将数值传递给 形参）
//值传递时，如果形参 发生改变，并 不会影响实参。

//如果函数不需要返回值，声明时可以写成void类型
void swap(int num1, int num2)           //值传递只是把数据进行传递，地址没有发生变化
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

void basic14()
{
	int a = 10;   //实参
	int b = 20;

	swap(a, b);   //形参发生改变 

	cout << "a = " << a << endl;    //不影响实参
	cout << "b = " << b << endl;
}