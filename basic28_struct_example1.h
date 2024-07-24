#pragma once

//结构体案例1：
//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员属性有姓名，考试分数，创建数组存放3名老师，通过函数给每个老师以及所带的学生赋值
//最终打印处老师数据以及老师所带的学生数据

//定义学生结构体
struct Student
{
	string sName;  //姓名  
	int score;     //分数
};

//定义老师结构体
struct Teacher
{
	string tName;       //姓名
	Student sArray[5];  //学生数组
};

//给老师和学生赋值的函数
void allocateSpace(Teacher tArray[], int len)
{
	//命名小技巧
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)  //给老师开始赋值
	{
		//第i名老师
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameseed[i];
		for (int j = 0; j < 5; j++)    //给学生开始赋值
		{
			int random = rand() % 61 + 40;
			//第i名老师的第j名学生
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameseed[j];
			tArray[i].sArray[j].score = random;
		}
	}

}

//给老师和学生打印成员属性的函数
void printInfo(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		//第i个老师
		cout << "老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "学生姓名：" << tArray[i].sArray[j].sName << endl;   //第i个老师的第j个学生
			cout << "学生成绩：" << tArray[i].sArray[j].score << endl;
		}
	}
}


void basic28()
{
	srand((unsigned int)time(NULL));   //随机数种子
	Teacher tArray[3];                 //创建3名老师的数组
	int len = sizeof(tArray) / sizeof(tArray[0]);  //老师数组长度
	//通过函数给3名老师的信息赋值，并给老师带的学生赋值
	allocateSpace(tArray, len);
	printInfo(tArray, len);

}