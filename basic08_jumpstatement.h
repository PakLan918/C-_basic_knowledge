#pragma once


void basic08()
{
	//跳转语句
	//1、break
	//作用：跳出选择结构或者循环结构
	//使用时机：
	//1、在switch语句中，作用是终止case并且跳出switch,详情看basic03
	//2、在循环语句中，作用是跳出当前循环语句，详情看basic04
	

	//3、在嵌套循环中，作用是跳出最近的内层循环
	//例子：打印10次0~80
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (j <= 80)
			{
				cout << j <<"  ";
			}
			else
			{
				cout << endl;
				break;
			}
			
		}
	}*/

	//2、continue
	//作用：在循环语句中， 跳过 本次循环中 余下未执行 的语句，继续执行 下一次循环
	//例子：打印星图改
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*";
			if (j >= 5)
			{
				cout << endl;
				continue;
			}
		}
	}

	//3、goto（不建议常用goto语句）
	//作用：可以 无条件 跳转语句
	//语法：goto 标记
	//如果标记的名称存在，执行到goto语句时会跳转到标记的位置
	//标记最好不设为C++里面的关键字
}