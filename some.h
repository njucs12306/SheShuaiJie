#include<stdio.h>
#include<string.h> 
#include<stdlib.h>

/* �������� */
int MENU();          //�˵�
void INPUT();        //����
void WRITE();        //�ļ���¼
void READ();         //�ļ���ȡ
void PRINT();        //��ӡ
void SEARCHSELL();       //��ѯ����Ʊ
void SELL();        //��Ʊ
void TUI();        //��Ʊ
void BREAK();         //�˳�
void WRONG();        //����

/* �궨�� */
#define Wrong "\n        ! ! ! ! ! ! ! ! !  ��������������������� ~~~~(>_<)~~~~  ! ! ! ! ! ! ! ! ! \n"
#define GeShi "\n             ���κ�   ����   ����ʱ��   ����ʱ��   Ʊ��   ��Ʊ��\n"  //�����ͷ
#define Print " %16s%9s%9s%11s%8s%9s \n\n",T[i].hao,T[i].data,T[i].lt,T[i].at,T[i].price,T[i].zps  //�����¼��ʽ
#define N 100        //����г���

/* �ṹ���� */
struct Train
{
	char hao[10];     //���κ�
	char A[200];//��·�ߣ��ַ����鱣��·����վ�� 
	int B[20];//������Ԥ����������ÿһ��վ����Ʊ�� 
	char zps[10];      // ��Ʊ��
}T[N];


/* ȫ�ֱ��� */
int i = 0;               //����
int n = 0;             //�ϼ�
int z;                //��Ʊ��
char l[20];          //����ռ�
