#include"some.h"
void SEARCHSELL()
{
	char name1[10];   //���κ�
	char name2[10];   //����	
	char choice;
	int j;
	do
	{
		system("cls");           //����
		printf("\n\n   ================= ��ӭ���� ��ѯ��ʱ����Ϣ ���� O(��_��)O ==============\n");
		printf("\n              ++++++++++++++++++��ѡ����ҷ�ʽ++++++++++++++++++\n\n\n");
		printf("         ----1.��ʾ�����г���Ϣ     2.�����β�ѯ      3.�����ڲ�ѯ----\n");
		printf("        \n\n                             ----4.�����ϼ��˵�----\n");
		printf("\n\n\n                                 ��ѡ�� ");
		scanf("%d", &j);
		gets(l);
		switch (j)
		{
		case 1:
			system("cls");           //����
			printf("\n\n          *********************���еĳ�����Ϣ����**********************\n");
			PRINT();
			break;
		case 2:
			system("cls");           //����
			printf("\n        --- �����복�� ---��  ");
			gets(name1);
			break;
		case 3:
			system("cls");           //����
			printf("\n        --- ���������� ---��  ");
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
			system("cls");           //����
			for (i = 0; i < n; i++)
			{
				if (strcmp(T[i].hao, name1) == 0)
				{
					printf("\n\n                             �� ���� �����г���Ϣ�ɹ�!\n");
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
			printf("\n                      --> ��ѯ��Ϣ���,�밴��������� <--   ");
			gets(l);
		}

		if (j == 3)
		{
			system("cls");           //����
			for (i = 0; i < N; i++)
			{
				if (strcmp(T[i].data, name2) == 0)
				{
					printf("\n\n                          �� ���� �����г���Ϣ�ɹ�!\n");
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
			printf("\n                      --> ��ѯ��Ϣ���,�밴��������� <--   ");
			gets(l);
		}
		do
		{
			system("cls");           //����
			printf("\n\n                      --> ��������(1), �������˵�(2) <--     ");
			choice = getchar();
			gets(l);
			if (choice != '1'&&choice != '2')
				WRONG();
		} while (choice != '1'&&choice != '2');
	} while (choice != '2');
}
