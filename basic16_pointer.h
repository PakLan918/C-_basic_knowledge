#pragma once


void basic16()
{
	//指针（指针就是地址）
	//内存编号是从0开始记录的，一般用 十六进制数 来表示
	//可以利用 指针变量 保存地址。

	//1、定义：
	//语法：数据类型 *指针变量名
	int* p;         //定义一个指针变量
	int a = 10;
	p = &a;         //记录变量a的地址
	//可以通过 解引用 的方式来找到 指针指向的内存。
	*p = 1000;      //指针前加 * 代表 解引用，找到指针指向内存中的数据，也可以通过 解引用 间接修改数据

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	//2、指针所占内存空间
	//在 32位操作系统 下，占用4个字节,无论是什么数据类型！
	//在 64位操作系统 下，占用8个字节，无论是什么数据类型！
	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;
	cout << "sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;
	cout << "sizeof(string *) = " << sizeof(string*) << endl;
}
