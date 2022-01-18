#define _CRT_SECURE_NO_WARNINGS
#include "book.h"

int  en()
{
	//添加、删除、打印、修改、查找
	printf("********************************************\n");
	printf("*******   1.add        2.delete	   *********\n");
	printf("*******   3.stamp      4.revise	   *********\n");
	printf("*******   5.seek       6.save      *********\n");
	printf("*******   0.exit                   *********\n");
	printf("********************************************\n");
	return 0;
}


int main()
{
	int input = 0;
	//创建通讯录
	struct Mycon con;//里面有friend数据、num和storage记录当前内存数量
	//初始化通讯录
	csh_myconmmunication(&con);
	do
	{
		en();
		printf("请输入你需要的功能>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_conmmunication(&con);
			break;
		case DELETE:
			delete_conmmunication(&con);
			break;
		case STAMP:
			stamp_conmmunication(&con);
			break;
		case REVISE:
			revise_communication(&con);
			break;
		case SEEK:
			seek_conmmunication(&con);
			break;
		case SAVE:
			save_conmmunication(&con);
			break;
		case EXIT:
			save_conmmunication(&con);
			del_storage(&con);
			printf("成功退出\n");
			break;
		default:printf("输入有误\n");
			break;
		}
	} while (input);
	return 0;
}