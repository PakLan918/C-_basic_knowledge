#pragma once

//结构体作为函数参数
//将结构体作为参数向函数中传递
//传递方式：1、值传递；2、地址传递

//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};

//值传递
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "子函数1中姓名：" << s.name << endl;
	cout << "年龄：" << s.age << endl;
	cout << "分数：" << s.score << endl;
}

//地址传递
void printStudent2(struct student* p)
{
	p->age = 200;    //地址传递会使得子函数和主函数都发生变化
	p->name = "李四";
	p->score = 100;
	cout << "子函数2中姓名：" << p->name << endl;
	cout << "年龄：" << p->age << endl;
	cout << "分数：" << p->score << endl;
}

void basic26()
{
	//创建结构体变量
	student s;
	s.name = "张三";
	s.age = 18;
	s.score = 90;

	//值传递
	printStudent1(s);
	cout << "值传递后主函数中姓名：" << s.name << endl;
	cout << "年龄：" << s.age << endl;
	cout << "分数：" << s.score << endl;

	//地址传递
	printStudent2(&s);
	cout << "地址传递后主函数中姓名：" << s.name << endl;
	cout << "年龄：" << s.age << endl;
	cout << "分数：" << s.score << endl;

	//值传递不会影响实参，而地址传递可以修饰实参
}








