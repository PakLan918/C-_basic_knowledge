#pragma once


//�������� ���߱��������������Լ���ε��ú���
//������ʵ��������Ե������壬���������� ���� ��Σ����Ǻ������� ֻ����һ�Σ�
void test01();
void test02(int a);   //������������ֻ�з���ֵ���ͣ����������β��б�
int test03();         //��������ʹ�ã�����������Ӧ��д�����庯��֮ǰ
int test04(int a);

//���ӣ���װ�ӷ�����
int add(int num1, int num2)       //����ʱ��num1��num2��û����ʵ���ݣ����Ϊ�β�
{
	int sum = num1 + num2;
	return sum;
}

void basic13()
{
	//����
	//���ã���һ�� ����ʹ�� �Ĵ��� ��װ �����������ظ�����
	//һ���ϴ�ĳ���һ���Ϊ ���ɸ������ ÿ��ģ��ʵ�� �ض��Ĺ��ܣ�
	//���壺1������ֵ���� 2�������� 3���������� 4����������� 5��return ���ʽ
	//�﷨��
	/*����ֵ���� �������������б�          ����ֵ���ͺ�return���ʽ��ҹ�
	{
	      ���������;
	      return ���ʽ;
	}
	*/

	//�����ĵ���
	//���ܣ�ʹ�ö���õĺ���
	//�﷨����������������
	int a = 10;                  //a��b��Ϊ ʵ�Σ������ú���ʱ��ʵ�ε�ֵ�� ���ݸ��βΣ�
	int b = 20;
	int c = add(a, b);
	cout << "c = " << c << endl;

	test01();
	test02(100);
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	int num2 = test04(1000);
	cout << "num2 = " << num2 << endl;
}

//����������ʽ��4�֣�
//1���޲��޷�
void test01()
{
	cout << "this is test01!" << endl;
}

//2���в��޷�
void test02(int a)
{
	cout << "this is test02!" << endl;
	cout << "a = " << a << endl;
}

//3���޲��з�
int test03()
{
	cout << "this is test03!" << endl;
	return 1000;
}

//4���в��з�
int test04(int a)
{
	cout << "this is test04!" << endl;
	cout << "a = " << a << endl;
	return a;
}