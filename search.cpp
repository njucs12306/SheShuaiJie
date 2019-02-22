#include"some.h"
void SEARCHSELL()
{
	char name1[10];   //车次号
	char name2[10];   //日期	
	char choice;
	int j;
	do
	{
		system("cls");           //清屏
		printf("\n\n   ================= 欢迎进入 查询火车时刻信息 界面 O(∩_∩)O ==============\n");
		printf("\n              ++++++++++++++++++请选择查找方式++++++++++++++++++\n\n\n");
		printf("         ----1.显示所有列车信息     2.按车次查询      3.按日期查询----\n");
		printf("        \n\n                             ----4.返回上级菜单----\n");
		printf("\n\n\n                                 请选择： ");
		scanf("%d", &j);
		gets(l);
		switch (j)
		{
		case 1:
			system("cls");           //清屏
			printf("\n\n          *********************所有的车次信息如下**********************\n");
			PRINT();
			break;
		case 2:
			system("cls");           //清屏
			printf("\n        --- 请输入车次 ---：  ");
			gets(name1);
			break;
		case 3:
			system("cls");           //清屏
			printf("\n        --- 请输入日期 ---：  ");
			gets(name2);
			break;
		case 4:
			break;
		default:
			WRONG();
			break;
		}
		READ();

		if (j == 2)
		{
			system("cls");           //清屏
			for (i = 0; i < n; i++)
			{
				if (strcmp(T[i].hao, name1) == 0)
				{
					printf("\n\n                             按 车次 查找列车信息成功!\n");
					printf("\n   ===========================================================================\n");
					break;
				}
			}
			for (i = 0; i < n; i++)
			{
				if (strcmp(T[i].hao, name1) == 0)
				{
					printf(GeShi);
					printf(Print);
					SELL();
				}
			}
			printf("   ===========================================================================\n");
			printf("\n                      --> 查询信息完毕,请按任意键返回 <--   ");
			gets(l);
		}

		if (j == 3)
		{
			system("cls");           //清屏
			for (i = 0; i < N; i++)
			{
				if (strcmp(T[i].data, name2) == 0)
				{
					printf("\n\n                          按 日期 查找列车信息成功!\n");
					printf("\n   ===========================================================================\n");
					printf(GeShi);
					break;
				}
			}
			for (i = 0; i < n; i++)
			{
				if (strcmp(T[i].data, name2) == 0)
				{
					printf(GeShi);
					printf(Print);
					SELL();
				}
			}
			printf("   ===========================================================================\n");
			printf("\n                      --> 查询信息完毕,请按任意键返回 <--   ");
			gets(l);
		}
		do
		{
			system("cls");           //清屏
			printf("\n\n                      --> 继续查找(1), 返回主菜单(2) <--     ");
			choice = getchar();
			gets(l);
			if (choice != '1'&&choice != '2')
				WRONG();
		} while (choice != '1'&&choice != '2');
	} while (choice != '2');
}
