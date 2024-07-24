#pragma once


void basic18()
{
	//主要看const修饰的是 指针*p 还是 指针变量p
	// const修饰的是谁，谁就不能动！！！
	//1、const修饰指针——常量指针
	int a = 10;
	int b = 20;
	const int* p = &a;
	cout << "常量指针改指向之前："<< * p << endl;
	//*p = 20;   常量指针指向的值 不可以 改！
	p = &b;    //常量指针的指向 可以 改！
	cout << "常量指针改指向之后："<< * p << endl;

	//2、const修饰常量——指针常量
	int* const p1 = &a;
	cout << "指针常量改值之前：" << *p1 << endl;
	*p1 = 30;  //指针常量指向的值 可以 改！
	cout << "指针常量改值之后：" << *p1 << endl;
	//p1 = &b;   指针常量的指向 不可以 改！

	//3、const即修饰指针，又修饰常量
	const int* const p2 = &a;
	//p2 = &b;     指针的指向 不可以 改！
	//*p2 = 40;    指针指向的值 不可以 改！
	cout << "指针为：" << *p2 << endl;
}
