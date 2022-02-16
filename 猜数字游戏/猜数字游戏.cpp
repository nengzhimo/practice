#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 写一个随机数并判断大小
void mulu()
{
	printf("#########################\n");
	printf("###欢迎来到猜数字游戏####\n");
	printf("#!!!!!!!!!!!!!!!!!!!!!!!#\n");
	printf("如果你玩按1\t不玩按0\n");
	return;
}
int main()
{
	int n = 0;
	int m = 0;
	srand((unsigned int)time(NULL));			//尽量不要多次执行
	while (1)
	{
		int num = rand() % 100 + 1;
		mulu();
		scanf("%d", &n);
		switch (n)
		{
		case 0:break;
		case 1:printf("开始游戏\n");
			while (1)
			{
				printf("输入你猜的数字：\n");
				scanf("%d", &m);
				if (m > num)
				{
					printf("猜大了\n");
				}
				else if (m < num)
				{
					printf("猜小了\n");
				}
				if (m == num)
				{
					printf("猜对了\n");
					break;
				}
			}
			break;
		default:printf("输入的不匹配\n"); break;
		}
		if (n == 0)
		{
			break;
		}
	}
	return 0;
}