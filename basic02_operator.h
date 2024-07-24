#pragma once



void basic02()
{
	//运算符
	//1、算术运算符  +,-,*,/,%,i++,++i,--i,i--
	int a = 14;
	int b = 5;
	int c = 3;

	int d = a + b;
	int e = a - c;
	int f = b * c;
	int g = a / c;
	int h = b % c;

	//递增（减）技巧：谁在前面先调用谁：i++，先调用i，再进行递增；++i，先进行递增，再调用i
	cout << "d = a+b = " << d<< endl;
	cout << "d++ = " << d++ << endl;      //d++,先调用d，再进行递增
	cout << "d = " << d << endl;
	cout << "++d = " << ++d << endl;      //++d,先进行递增，再调用d
	
	cout << "取模计算 h = b % c = " << h << endl;  //取模运算是计算两个数相除后的余数
	cout << "除法运算 g = a / c = " << g << endl;  //两个整数相除结果依然是整数，而将小数部分去除，不用考虑四舍五入

	//2、赋值运算符   =,+=,-=,*=,/=,%=
	a = 2;
	a %= 3;
	cout << "a = 2, a %= 3 的结果是：" << a << endl;  // a ()= x 实际上是 a = a () x

	//3、比较运算符   ==,!=,<,>,<=,>=
	//用于输出真值或者假值，看比较结果而定
	//一般配合程序结构使用
	a = 2;
	b = 5;
	c = 2;
	cout << "a == c 输出值为：" << bool(a == c) << endl;
	cout << "b != c 输出值为：" << bool(b != c) << endl;
	cout << "a != c 输出值为：" << bool(a != c) << endl;
	cout << "a < c 输出值为：" << bool(a < c) << endl;

	//4、逻辑运算符   !,&&,||   非，与，或
	//一般配合程序结构中需要进行条件判断的时候使用
	bool x = true;
	bool y = false;
	cout << "x = true , !x = " << !x << endl;							//！，非运算，取反
	cout << "x = true, y = false, x&&y = " << bool(x && y) << endl;     //&&，与运算，全真为真，有假为假
	cout << "x = true, y = false, x||y = " << bool(x || y) << endl;     //||，或运算，全假为假，有真为真

	//5、三目运算符    语法  表达式1 ？ 表达式2 ： 表达式3
	a = 10;
	b = 20;
	c = 0;

	c = (a > b ? a : b);                      //若表达式1为假，执行表达式3，并返回表达式3的结果
	cout << "c = " << c << endl;

	//在C++中，三目运算符返回的是变量，可以继续赋值
	//括号优先级高，优先执行括号内的语句
	(a < b ?  c = a - 10 : b) = 100;          //若表达式1为真，执行表达式2，并返回表达式2的结果
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}