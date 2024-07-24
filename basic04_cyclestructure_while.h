#pragma once
#include<ctime>


void basic04()
{
	//循环结构      写循环时一定要避免死循环
	//1、while循环语句  只要循环条件的结果为真，便执行循环语句
	//语法： while(循环条件){循环语句}
	//例子：
	srand((unsigned int)time(NULL));   //生成随机数种子
	int num = rand() % 100 + 60;        //生成随机数，rand()%100 生成0~99的随机数
	int val = 0;
	//break 关键字
	//作用：退出当前循环
	while (-5)  //非0数相当于真，将会一直执行while循环
	{
		cout << "请输入您猜测的数字！" << endl;
		cin >> val;
		if (val > num)
		{
			cout << "猜测过大！" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小！" << endl;
		}
		else
		{
			cout << "猜对了！" << endl;
			break;    //可以利用break关键字退出循环
		}
	}
}