#define _CRT_SECURE_NO_WARNINGS
#include "book.h"

int  en()
{
	//��ӡ�ɾ������ӡ���޸ġ�����
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
	//����ͨѶ¼
	struct Mycon con;//������friend���ݡ�num��storage��¼��ǰ�ڴ�����
	//��ʼ��ͨѶ¼
	csh_myconmmunication(&con);
	do
	{
		en();
		printf("����������Ҫ�Ĺ���>");
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
			printf("�ɹ��˳�\n");
			break;
		default:printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}