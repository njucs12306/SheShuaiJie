#include<iostream>
#include<cstdlib>
#include<cmath>
#include<fstream>

using namespace std;

struct erzi {//�������Ǹ�������Ķ���
	int yp;//��Ʊ������
	char diming[30];//����������·�ߵĵ���
	erzi *enext;
};

struct zong {//��������ܵ��Ǹ�����Ķ���
	char checiming[20];//���ε�����
	int czl;//ÿһ�����ĳ�����
	erzi *a;//�������泵�ľ�����Ϣ
	zong *znext;
};

int dingdannum(1);//��������



int main()
{
	ofstream fout("checi.txt");
	ofstream fout("dingdan.txt");
	cout << "��ѡ����Ҫ�Ĺ���" << endl;
	cout << "1.¼���ε���Ϣ" << endl;
	cout << "2.������ε���Ϣ" << endl;
	cout << "3.��ѯ�����Ϣ" << endl;
	cout << "4.����Ʊϵͳ" << endl;
	cout << "6.�˳�ϵͳ" << endl;
	int czzl;//������������������û���ָ��
	cin >> czzl;
	if (czzl < 1 || czzl>6)
	{
		cout << "������Чָ�����������" << endl;
	}
	switch (czzl)
	{
		case 0:

	}
}













