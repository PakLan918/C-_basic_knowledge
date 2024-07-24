#pragma once


//函数声明 告诉编译器函数名称以及如何调用函数
//函数的实际主体可以单独定义，函数的声明 可以 多次，但是函数定义 只能有一次！
void test01();
void test02(int a);   //函数的声明，只有返回值类型，函数名，形参列表
int test03();         //先声明再使用，否则函数定义应该写在主体函数之前
int test04(int a);

//例子：封装加法函数
int add(int num1, int num2)       //定义时，num1和num2并没有真实数据，简称为形参
{
	int sum = num1 + num2;
	return sum;
}

void basic13()
{
	//函数
	//作用：将一段 经常使用 的代码 封装 起来，减少重复代码
	//一个较大的程序，一般分为 若干个程序块 每个模块实现 特定的功能；
	//定义：1、返回值类型 2、函数名 3、参数表列 4、函数体语句 5、return 表达式
	//语法：
	/*返回值类型 函数名（参数列表）          返回值类型和return表达式相挂钩
	{
	      函数体语句;
	      return 表达式;
	}
	*/

	//函数的调用
	//功能：使用定义好的函数
	//语法：函数名（参数）
	int a = 10;                  //a和b称为 实参，当调用函数时，实参的值会 传递给形参；
	int b = 20;
	int c = add(a, b);
	cout << "c = " << c << endl;

	test01();
	test02(100);
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	int num2 = test04(1000);
	cout << "num2 = " << num2 << endl;
}

//函数常见样式（4种）
//1、无参无返
void test01()
{
	cout << "this is test01!" << endl;
}

//2、有参无返
void test02(int a)
{
	cout << "this is test02!" << endl;
	cout << "a = " << a << endl;
}

//3、无参有返
int test03()
{
	cout << "this is test03!" << endl;
	return 1000;
}

//4、有参有返
int test04(int a)
{
	cout << "this is test04!" << endl;
	cout << "a = " << a << endl;
	return a;
}