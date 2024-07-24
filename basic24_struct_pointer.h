#pragma once

//结构体指针
//通过指针访问结构体的成员
//利用 -> 操作符可以通过结构体指针访问结构体属性

void basic24()
{
	//定义结构体变量
	struct Student
	{
		string name;
		int age;
		int score;
	};

	//创建学生结构体变量
	Student s = { "李四",18,88 };

	//通过指针指向结构体变量
	Student* p = &s;

	//通过指针访问结构体变量中的数据
	cout << "姓名： " << p->name << endl;
	cout << "年龄： " << p->age << endl;
	cout << "分数： " << p->score << endl;
	//通过结构体指针访问结构体中的成员属性，需要用 ->

}