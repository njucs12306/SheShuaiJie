#include"some.h"
void SELL()
{
	char ch;
	do
	{
		printf("\n      �Ƿ�Ʊ?   (y/n)    ");
		ch = getchar();
		gets(l);
		if (ch != 'y'&&ch != 'n')
			WRONG();
		else if (ch == 'n')
			break;
	} while (ch != 'y'&&ch != 'n');
	if (ch == 'y')
	{
		printf("\n����������Ʊ�������س���ȷ�ϣ�  ");
		scanf("%d", &z);
		gets(l);
		printf("\n����ɹ� \n\n\n");
	}
}

void TUI()
{
	char choice;
	system("cls");           //����
	printf("\n\n    =============== ��ӭ���� ��Ʊ ����===============\n");
	do
	{
		char ch2;
		char ch1;
		char num[10];
		printf("\n      �Ƿ�Ҫ����Ʊ?   (y/n)    ");
		scanf("%c", &ch2);
		gets(l);
		if (ch2 == 'n')
			break;
		else if (ch2 == 'y')
		{
			system("cls");           //����
			printf("\n\n�����복�κţ����س���ȷ�ϣ�  ");
			scanf("%s", num);
			gets(l);
			READ();
			for (i = 0; i < n; i++)
			{
				if (strcmp(num, T[i].hao) == 0)  //�ж��ַ����Ƚ��Ƿ����
				{
					printf(GeShi);
					printf(Print);
					do
					{
						printf("\n        ���Ҫ����  ?   (y/n)    ");
						scanf("%c", &ch1);
						gets(l);
						if (ch1 != 'y'&&ch1 != 'n')
							WRONG();
						else if (ch1 == 'n')
							break;
					} while (ch1 != 'y'&&ch1 != 'n');
					if (ch1 == 'y')
						printf("\n  ==================================��Ʊ�ɹ� !==================================\n\n\n");
				}
				else
					printf("\n      ���޴˳� \n   ");
			}
			printf("\n\n                               -->�������<--     \n");
			do
			{
				system("cls");           //����
				printf("\n\n                      --> ��������(1), �������˵�(2) <--     ");
				choice = getchar();
				gets(l);
				if (choice != '1'&&choice != '2')
					WRONG();
			} while (choice != '1'&&choice != '2');
		}
	} while (choice != '2');
}