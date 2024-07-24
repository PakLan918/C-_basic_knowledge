#pragma once

//结构体嵌套结构体
//结构体成员 可以是 另一个结构体
//在结构体中，我们可以定义另一个结构体来作为成员，用来更好地解决实际问题

void basic25()
{
	//先定义学生结构体
	struct Student
	{
		string name;
		int age;
		int score;
	};

	//再定义嵌套了学生结构体的教师结构体
	struct Teacher
	{
		string name;
		int id;
		int age;
		Student stu;
	};

	//创建老师
	Teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 28;
	t.stu.score = 85;

	//输出老师信息
	cout << "老师姓名： " << t.name << endl;
	cout << "老师编号： " << t.id << endl;
	cout << "老师年龄： " << t.age << endl;
	cout << "老师带的学生姓名： " << t.stu.name << endl;
	cout << "学生年龄： " << t.stu.age << endl;
	cout << "学生考试分数： " << t.stu.score << endl;
}