#include"some.h"
void INPUT()
{
	char ch;
	do
	{
		system("cls");           //����
		printf("\n\n  ================= ��ӭ���� ¼���ʱ����Ϣ ���� O(��_��)O =================\n");
		do
		{
			printf("\n    �½��г���Ϣ?  (y/n)   ");
			ch = getchar();
			gets(l);
			if (ch != 'y'&&ch != 'n')
				WRONG();
		} while (ch != 'y'&&ch != 'n');
		if (ch == 'n')
			break;
		printf("\n    ---------------------");
		printf("\n   ��¼��� %d ���г���Ϣ\n\n", n + 1);
		printf("    ����        ");
		gets(T[i].hao);
		printf("    ·��        ");
		int z(0);
		char temp;
		do {
			temp = getchar();
			T[i].A[z] = temp;
			z++;
		} while (temp != '/n')
			T[i].A[z] = '/0';
		printf("    ��Ʊ��      ");
		gets(T[i].zps);
		n++;
		i++;
	} while (i < N);
	WRITE();
	printf("\n");
	printf("                   --------------------------------------\n");
	printf("                       ϵͳ���ص��г���Ϣ���� \n");
	printf("                   --------------------------------------\n\n");
	PRINT();
}
