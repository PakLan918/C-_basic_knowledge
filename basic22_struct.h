#pragma once

//结构体
//结构体属于 用户自定义 的 数据类型，允许用户存储 不同的数据类型
//定义和使用：
//语法： struct 结构体名{结构体成员列表};

//结构体创建变量的三种方式：
//(1) struct 结构体名 变量名;
//(2) struct 结构体名 变量名 = { 成员1值，成员2值，...... };
//(3) 定义结构体时顺便创建变量。


//定义结构体时，struct 关键字不能省略
//创建结构体变量时，struct 关键字可以省略
//不推荐使用 第三种方式 创建结构体变量
void basic22()
{
	//例子：
	//1、创建学生数据类型：学生包括（姓名，年龄，分数）
	struct Student
	{
		string name;  //姓名
		int age;      //年龄
		int score;    //分数
	};


	//第一种方式
	struct Student s1;   //创建结构体变量
	//给s1属性赋值，并通过 . 访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 24;
	s1.score = 98;
	cout << "姓名： " << s1.name << " 年龄： " << s1.age << " 分数： " << s1.score << endl;

	//第二种方式
	struct Student s2 = { "李四",18,80 };
	cout << "姓名： " << s2.name << " 年龄： " << s2.age << " 分数： " << s2.score << endl;

	//第三种方式
	//struct Student
	//{
	//	string name;  //姓名
	//	int age;      //年龄
	//	int score;    //分数
	//}s3;
	//s3.name = "王五";
	//s3.age = 20;
	//s3.score = 90;
	//cout << "姓名： " << s3.name << " 年龄： " << s3.age << " 分数： " << s3.score << endl;
}