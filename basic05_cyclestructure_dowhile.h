#pragma once


void basic05()
{
	//循环结构
	//2、do...while语句
	//语法： do{循环语句}while(循环条件)
	//do...while语句会先执行一次循环语句，再去判断循环条件
	//第一个例子：
	//int num = 0; //相当于假

	//while (num)  //不进入循环
	//{
	//	cout <<"while循环的打印：" << num << endl;
	//	num++;
	//}

	//do 
	//{
	//	cout << num << endl;
	//	num++;
	//	if (num == 10000)
	//	{
	//		cout << "到达10000！" << endl;
	//		break;
	//	}
	//} while (num);   //先执行过一次num++，使得num从0变为1，满足循环条件为真

	//第二个案例，水仙花数
	//水仙花数是指一个3位数，它的每个位上数字的3次幂之和为它本身
	//例如： 1^3 + 5^3 + 3^3 = 153
	
	int n = 100;
	do
	{
		n++;
		int a = 0;
		int b = 0;
		int c = 0;

		a = n % 10;         //对数字取模于10得到个位
		b = n / 10 % 10;    //对数字先进行整除于10，再取模于10得到十位
		c = n / 100;        //对数字整除100得到百位

		if (a* a* a + b * b * b + c * c * c == n && n < 1000) //需要加个 &&与 逻辑计算，不然会把1000也打印成水仙花数
		{
			cout <<"水仙花数："<< n << endl;
		}
	} while (n < 1000);   //因为是先执行语句再判断条件
}