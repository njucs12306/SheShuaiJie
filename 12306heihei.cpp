#include<iostream>
#include<cstdlib>
#include<cmath>
#include<fstream>

using namespace std;

struct erzi {//这里是那个子链表的定义
	int yp;//余票的数量
	char diming[30];//地名，车次路线的地名
	erzi *enext;
};

struct zong {//这里就是总的那个链表的定义
	char checiming[20];//车次的名字
	int czl;//每一辆车的承载量
	erzi *a;//子链表保存车的具体信息
	zong *znext;
};

int dingdannum(1);//订单号码



int main()
{
	ofstream fout("checi.txt");
	ofstream fout("dingdan.txt");
	cout << "请选择你要的功能" << endl;
	cout << "1.录入班次的信息" << endl;
	cout << "2.操作班次的信息" << endl;
	cout << "3.查询班次信息" << endl;
	cout << "4.售退票系统" << endl;
	cout << "6.退出系统" << endl;
	int czzl;//定义操作数用来保存用户的指令
	cin >> czzl;
	if (czzl < 1 || czzl>6)
	{
		cout << "输入无效指令，请重新输入" << endl;
	}
	switch (czzl)
	{
		case 0:

	}
}













