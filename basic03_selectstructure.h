#pragma once




void basic03()
{
	//程序流程结构：顺序结构、选择结构、循环结构
	//1、选择结构
	//if语句：   if（条件）{条件满足执行的语句}
	int a = 10;
	int b = 20;
	int c = 0;
	if (a < b)
	{
		cout << "a 比 b 小 ：" << b - a << endl;
	}
	else if (a > b)    //if（条件）后面不能加分号;  否则系统会直接执行该条件后的语句
	{
		cout << "a 比 b 大 ：" << a - b << endl;
	}
	else;
	{
		cout << "a 和 b 一样大！" << endl;
	}

	//switch语句
	// 与if语句相比，switch语句的结构清晰，执行效率高，但缺点是无法判断区间
	//关键字 cin  用于从键盘获取数据
	int score = 0;
	cout << "请给电影打分！" << endl;
	cin >> score;
	switch (score)                   //switch语句中表达式类型只能是整型或者字符型
	{
	case 10:                         //case里如果没有break，那么程序会一直向下执行
	case 9:                          //也就是9~10为经典，8为非常好，6~7为一般，6以下为烂片
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
}