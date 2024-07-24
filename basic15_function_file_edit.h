#pragma once




void basic15()
{
	//函数的分文件编写（让代码结构更加清晰）
	//一般有4个步骤：
	//1、创建后缀名为 .h 的头文件
	//2、创建后缀名为 .cpp 的源文件
	//3、在头文件中写函数的声明
	//4、在源文件中写函数的定义

	//（1）在头文件中声明时，需要添加以下语句
	/*
	#include<iostream>
	using namespace std;
	然后再写声明
	*/
	
	//（2）在源文件中写定义时，需要添加以下语句
	//#include"头文件名称.h"

	//（3）在主函数中如果需要用到 创建好的函数，只需要在初始前缀上加入（#include"头文件名称.h"）

	//（4）自己创建的函数引用时是用 " " ，而不是 < >。 
}

//进阶：
//函数的分文件编写
//可以将声明和实现都一并写进头文件中，使得源文件中显得不那么庞杂
//与本项目构建的方式一样，将声明和定义均写进头文件中，亦可以使得代码结构更加清晰并且让源文件更加简洁

