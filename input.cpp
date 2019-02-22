#include"some.h"
void INPUT()
{
	char ch;
	do
	{
		system("cls");           //清屏
		printf("\n\n  ================= 欢迎进入 录入火车时刻信息 界面 O(∩_∩)O =================\n");
		do
		{
			printf("\n    新建列车信息?  (y/n)   ");
			ch = getchar();
			gets(l);
			if (ch != 'y'&&ch != 'n')
				WRONG();
		} while (ch != 'y'&&ch != 'n');
		if (ch == 'n')
			break;
		printf("\n    ---------------------");
		printf("\n   请录入第 %d 趟列车信息\n\n", n + 1);
		printf("    车次        ");
		gets(T[i].hao);
		printf("    路线        ");
		int z(0);
		char temp;
		do {
			temp = getchar();
			T[i].A[z] = temp;
			z++;
		} while (temp != '/n')
			T[i].A[z] = '/0';
		printf("    总票数      ");
		gets(T[i].zps);
		n++;
		i++;
	} while (i < N);
	WRITE();
	printf("\n");
	printf("                   --------------------------------------\n");
	printf("                       系统记载的列车信息如下 \n");
	printf("                   --------------------------------------\n\n");
	PRINT();
}
