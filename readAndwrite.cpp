#include"some.h"
void WRITE()
{
	FILE *fp, *fp1;
	if ((fp = fopen("train.txt", "w")) == NULL)
	{
		printf("�޷������ļ�!\n\n");
		getchar();
		return;
	}
	if ((fp1 = fopen("�г�����.txt", "w")) == NULL)//���ڼ�¼�����˳�
	{
		printf("�޷������ļ�!\n");
		getchar();
		return;
	}
	for (i = 0; i < n; i++)
		if (fwrite(&T[i], sizeof(struct Train), 1, fp) == 0)
			printf("д������ʧ��!\n\n");
	fprintf(fp1, "%d", n);
	fclose(fp);
	fclose(fp1);
}



void READ()
{
	FILE *fp, *fp1;
	if ((fp = fopen("train.txt", "r")) == NULL)
	{
		printf("�ļ���ʧ��!\n\n");
		getchar();
		return;
	}
	if ((fp1 = fopen("�г�����.txt", "r")) == NULL)
	{
		printf("�ļ���ʧ��!\n\n");
		getchar();
		return;
	}
	fscanf(fp1, "%d", &n);
	fclose(fp1);
	for (i = 0; i < n; i++)
	{
		fread(&T[i], sizeof(struct Train), 1, fp);
	}
	fclose(fp);
}