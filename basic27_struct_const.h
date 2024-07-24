#pragma once

//结构体中const使用场景
//用const来防止误操作

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//但有一定的隐患，需要用const加以限制，防止误操作
void printStudents(const student* s)
{
	//s->age = 150;  加入const之后，一旦有修改的操作便会报错，防止误操作
	cout << "姓名：" << s->name << endl;
	cout << "年龄：" << s->age << endl;
	cout <<"分数：" << s->score << endl;
}

void basic27()
{
	//创建结构体变量
	student s = { "张三",18,70 };

	printStudents(&s);
}