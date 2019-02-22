#include"some.h"
void WRITE()
{
	FILE *fp, *fp1;
	if ((fp = fopen("train.txt", "w")) == NULL)
	{
		printf("无法创建文件!\n\n");
		getchar();
		return;
	}
	if ((fp1 = fopen("列车数量.txt", "w")) == NULL)//用于记录共几趟车
	{
		printf("无法创建文件!\n");
		getchar();
		return;
	}
	for (i = 0; i < n; i++)
		if (fwrite(&T[i], sizeof(struct Train), 1, fp) == 0)
			printf("写入数据失败!\n\n");
	fprintf(fp1, "%d", n);
	fclose(fp);
	fclose(fp1);
}



void READ()
{
	FILE *fp, *fp1;
	if ((fp = fopen("train.txt", "r")) == NULL)
	{
		printf("文件打开失败!\n\n");
		getchar();
		return;
	}
	if ((fp1 = fopen("列车数量.txt", "r")) == NULL)
	{
		printf("文件打开失败!\n\n");
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