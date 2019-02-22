#include<stdio.h>
#include<string.h> 
#include<stdlib.h>

/* 函数声明 */
int MENU();          //菜单
void INPUT();        //输入
void WRITE();        //文件记录
void READ();         //文件读取
void PRINT();        //打印
void SEARCHSELL();       //查询及售票
void SELL();        //售票
void TUI();        //退票
void BREAK();         //退出
void WRONG();        //纠错

/* 宏定义 */
#define Wrong "\n        ! ! ! ! ! ! ! ! !  输入错误啦，请重新输入 ~~~~(>_<)~~~~  ! ! ! ! ! ! ! ! ! \n"
#define GeShi "\n             车次号   日期   发车时间   到达时间   票价   总票量\n"  //输出表头
#define Print " %16s%9s%9s%11s%8s%9s \n\n",T[i].hao,T[i].data,T[i].lt,T[i].at,T[i].price,T[i].zps  //输出记录格式
#define N 100        //最大列车数

/* 结构定义 */
struct Train
{
	char hao[10];     //车次号
	char A[200];//；路线，字符数组保存路过的站名 
	int B[20];//下面是预计用来保存每一个站的余票的 
	char zps[10];      // 总票数
}T[N];


/* 全局变量 */
int i = 0;               //计数
int n = 0;             //合计
int z;                //购票量
char l[20];          //纠错空间
