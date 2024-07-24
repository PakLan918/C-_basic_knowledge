#pragma once

//结构体数组
//将自定义的结构体放入到数组中方便维护
//语法：struct 结构体名 数组名[元素个数]={{ },{ },{ },......};


void basic23()
{
	//例子：
	//定义结构体
	struct Student
	{
		string name;  //要用string类型实际上需要添加#include<string>的，但是由于main中已经添加了所以不再添加防止重复包含报错
		int age;
		int score;
	};

	//创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三",18,90},
		{"李四",20,85},
		{"王五",24,100}
	};


	//结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 22;
	stuArray[2].score = 70;

	//遍历结构体数组
	for (int i = 0; i < sizeof(stuArray) / sizeof(stuArray[0]); i++)
	{
		cout << "姓名： " << stuArray[i].name << endl;
		cout << "年龄： " << stuArray[i].age << endl;
		cout << "分数： " << stuArray[i].score << endl;
	}
}