#pragma once



void basic07()
{
	//循环结构
	//4、嵌套循环
	//在循环语句里再嵌套一个循环语句

	//例子1：打印星图
	//外部循环一次，内部循环一周
	for (int i = 0; i < 10; i++)       //外部循环
	{
		for (int j = 0; j < 10; j++)   //内部循环
		{
			cout << "*";
		}
		cout << endl;
	}

	//例子2：打印乘法口诀表
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = "<<j * i << "   ";
		}
		cout << endl;
	}
}