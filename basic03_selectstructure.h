#pragma once




void basic03()
{
	//�������̽ṹ��˳��ṹ��ѡ��ṹ��ѭ���ṹ
	//1��ѡ��ṹ
	//if��䣺   if��������{��������ִ�е����}
	int a = 10;
	int b = 20;
	int c = 0;
	if (a < b)
	{
		cout << "a �� b С ��" << b - a << endl;
	}
	else if (a > b)    //if�����������治�ܼӷֺ�;  ����ϵͳ��ֱ��ִ�и�����������
	{
		cout << "a �� b �� ��" << a - b << endl;
	}
	else;
	{
		cout << "a �� b һ����" << endl;
	}

	//switch���
	// ��if�����ȣ�switch���Ľṹ������ִ��Ч�ʸߣ���ȱ�����޷��ж�����
	//�ؼ��� cin  ���ڴӼ��̻�ȡ����
	int score = 0;
	cout << "�����Ӱ��֣�" << endl;
	cin >> score;
	switch (score)                   //switch����б��ʽ����ֻ�������ͻ����ַ���
	{
	case 10:                         //case�����û��break����ô�����һֱ����ִ��
	case 9:                          //Ҳ����9~10Ϊ���䣬8Ϊ�ǳ��ã�6~7Ϊһ�㣬6����Ϊ��Ƭ
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}
}