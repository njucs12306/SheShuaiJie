#include"some.h"
void SELL()
{
	char ch;
	do
	{
		printf("\n      是否购票?   (y/n)    ");
		ch = getchar();
		gets(l);
		if (ch != 'y'&&ch != 'n')
			WRONG();
		else if (ch == 'n')
			break;
	} while (ch != 'y'&&ch != 'n');
	if (ch == 'y')
	{
		printf("\n请输入所买票数，按回车键确认：  ");
		scanf("%d", &z);
		gets(l);
		printf("\n购买成功 \n\n\n");
	}
}

void TUI()
{
	char choice;
	system("cls");           //清屏
	printf("\n\n    =============== 欢迎进入 退票 界面===============\n");
	do
	{
		char ch2;
		char ch1;
		char num[10];
		printf("\n      是否要求退票?   (y/n)    ");
		scanf("%c", &ch2);
		gets(l);
		if (ch2 == 'n')
			break;
		else if (ch2 == 'y')
		{
			system("cls");           //清屏
			printf("\n\n请输入车次号，按回车键确认：  ");
			scanf("%s", num);
			gets(l);
			READ();
			for (i = 0; i < n; i++)
			{
				if (strcmp(num, T[i].hao) == 0)  //判断字符串比较是否相等
				{
					printf(GeShi);
					printf(Print);
					do
					{
						printf("\n        真的要退吗  ?   (y/n)    ");
						scanf("%c", &ch1);
						gets(l);
						if (ch1 != 'y'&&ch1 != 'n')
							WRONG();
						else if (ch1 == 'n')
							break;
					} while (ch1 != 'y'&&ch1 != 'n');
					if (ch1 == 'y')
						printf("\n  ==================================退票成功 !==================================\n\n\n");
				}
				else
					printf("\n      查无此车 \n   ");
			}
			printf("\n\n                               -->搜索完毕<--     \n");
			do
			{
				system("cls");           //清屏
				printf("\n\n                      --> 继续搜索(1), 返回主菜单(2) <--     ");
				choice = getchar();
				gets(l);
				if (choice != '1'&&choice != '2')
					WRONG();
			} while (choice != '1'&&choice != '2');
		}
	} while (choice != '2');
}
