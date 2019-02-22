#include"some.h"
int MENU()
{
	int choice;
	system("cls");           //借鉴而来的清屏语句
	printf(" \n                   --------------    选项    -------------\n\n");
	printf("                              1.录入班次信息\n");
	printf("                              2.查询班次信息及买票\n");
	printf("                              3.退票\n");
	printf("                              4.退出\n");
	printf("                   -----------------------------------------\n");
	printf("                                  请选择：  ");
	scanf("%d", &choice);
	gets(l);
	return choice;
}