#pragma once
#include<string> //C++风格字符串需要包含string头文件


void basic01()
{
	//数据类型
	// 关键字  sizeof(数据类型/变量)  用于统计数据类型所占内存大小
	//1、整型   short(2字节)  int(4字节)  long(4字节)  longlong(8字节)
	//验证字节空间
	short a;
	int b;
	long c;
	atomic_llong g;
	cout << "short所占字节：" << sizeof(a) << endl;
	cout << "int所占字节：" << sizeof(b) << endl;
	cout << "long所占字节：" << sizeof(c) << endl;
	cout << "longlong所占字节：" << sizeof(g) << endl;

	//2、实型   float(4字节)  double/longdouble(8字节)
	//验证字节空间
	float d;
	double e;
	_LONGDOUBLE f;
	cout << "float所占字节：" << sizeof(d) << endl;
	cout << "double所占字节：" << sizeof(e) << endl;
	cout << "longdouble所占字节：" << sizeof(f) << endl;

	//3、字符串型  表示一串字符      char 占用1个字符空间
	string str = "C++基础知识回顾";  //string类型占用40个字符空间
	char cr;
	cout << "string所占字节：" << sizeof(str) << endl;
	cout << "char所占字节：" << sizeof(cr) << endl;

	//4、布尔类型  bool 占用1个字符空间
	bool tar;
	cout << "bool所占字节：" << sizeof(tar) << endl;
}