#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// дһ����������жϴ�С
void mulu()
{
	printf("#########################\n");
	printf("###��ӭ������������Ϸ####\n");
	printf("#!!!!!!!!!!!!!!!!!!!!!!!#\n");
	printf("������水1\t���水0\n");
	return;
}
int main()
{
	int n = 0;
	int m = 0;
	srand((unsigned int)time(NULL));			//������Ҫ���ִ��
	while (1)
	{
		int num = rand() % 100 + 1;
		mulu();
		scanf("%d", &n);
		switch (n)
		{
		case 0:break;
		case 1:printf("��ʼ��Ϸ\n");
			while (1)
			{
				printf("������µ����֣�\n");
				scanf("%d", &m);
				if (m > num)
				{
					printf("�´���\n");
				}
				else if (m < num)
				{
					printf("��С��\n");
				}
				if (m == num)
				{
					printf("�¶���\n");
					break;
				}
			}
			break;
		default:printf("����Ĳ�ƥ��\n"); break;
		}
		if (n == 0)
		{
			break;
		}
	}
	return 0;
}