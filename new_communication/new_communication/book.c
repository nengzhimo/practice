#define _CRT_SECURE_NO_WARNINGS
#include "book.h"


void csh_myconmmunication( Mycon* ps)
{
	ps->friend = (struct Myconmmunication*)malloc(3 * sizeof(struct Myconmmunication));
	if (ps->friend == NULL)
	{
		return;
	}
	ps->num = 0;
	ps->storage = Min;
	//把文件中已存的信息加载到通讯录上
	load_conmmunication(ps);
}


void save_conmmunication(Mycon* p)
{
	FILE * pf = fopen("txl.dat", "w");
	if (pf == NULL)
	{
		printf("save_conmmunication:%s\n", strerror(errno));
		return;
	}
	//写通讯录到文件中
	int i = 0;
	for (i = 0; i < p->num; i++)
	{
		fwrite(p->friend + i, sizeof(struct Myconmmunication), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}


void load_conmmunication(Mycon* p)
{
	FILE* pf = fopen("txl.dat", "r");
	if (pf == NULL)
	{
		printf("load_conmmunication:%s\n", strerror(errno));
		return;
	}
	//读取文中的数据，并进行存储
	struct  Myconmmunication tem = { 0 };
	while (fread(&tem, sizeof(struct Myconmmunication), 1, pf));
	{
		cs_storage(p);
		p->friend[p->num] = tem;
		p->num++;
	}

	fclose(pf);
	pf = NULL;
}


void cs_storage(Mycon* p)
{
	if (p->num==p->storage)
	{
		//扩容
	struct Myconmmunication* ptr = realloc(p->friend, (p->storage + 1) * sizeof(struct Myconmmunication));
	if (ptr != NULL)
		{
			p->friend = ptr;
			p->storage += 1;
			printf("扩容成功\n");
		}
	else
	   {
			printf("扩容失败\n");
	   }
	}
}

void add_conmmunication( Mycon* p)
{
		cs_storage(p);//测试容量
		printf("输入姓名：");
		scanf("%s", p->friend[p->num].name);
		printf("输入年龄：");
		scanf("%d", &(p->friend[p->num].age));
		printf("输入性别：");
		scanf("%s", p->friend[p->num].sex);
		printf("输入电话：");
		scanf("%s", p->friend[p->num].phone);
		printf("输入地址：");
		scanf("%s", p->friend[p->num].address);
		p->num++;
		printf("添加成功\n");
}

void stamp_conmmunication(const  Mycon* p)
{
	printf("% -20s\t% -10s\t% -10s\t% -10s\t% -20s\t\n", "姓名", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0; i < p->num; i++)
	{
		printf("% -20s\t% -10d\t% -10s\t% -10s\t% -20s\t\n",
			p->friend[i].name,
			p->friend[i].age,
			p->friend[i].sex,
			p->friend[i].phone,
			p->friend[i].address);
	}
}

static int findbyname(const  Mycon* p, char name[Maxnum])
{
	for (int i = 0; i < p->num; i++)
	{
		if (strcmp(p->friend[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//找不到的情况
}

void delete_conmmunication( Mycon* p)
{
	char name[Maxnum];
	printf("输入你要删除的人>");
	scanf("%s", name);
	int pos = findbyname(p, name);
	int j = 0;
	if (pos == -1)			//为-1则没找到
	{
		printf("数据不存在\n");
	}
	else		//删除数据
	{
		for (j = pos; j < p->num; j++)
		{
			p->friend[j] = p->friend[j+1];
		}
		p->num--;
		printf("删除成功\n");
	}
}

void seek_conmmunication(const  Mycon* p)
{
	char name[Maxnum];
	printf("输入你要找的人：");
	scanf("%s", name);
	int pos = findbyname(p, name);
	if (pos==-1)
	{
		printf("数据不存在\n");
	}
	else
	{
		printf("% -20s\t% -10s\t% -10s\t% -10s\t% -20s\t\n", 
				"姓名", "年龄", "性别", "电话", "地址");
		printf("% -20s\t % -10d\t % -10s\t % -10s\t % -20s\t\n",
				p->friend[pos].name,
				p->friend[pos].age,
				p->friend[pos].sex,
				p->friend[pos].phone,
				p->friend[pos].address);
	}
}
void revise_communication( Mycon* p)
{
	char name[Maxnum];
	printf("请输入你要修改的人：");
	scanf("%s", name);
	int pos = findbyname(p, name);
	if (pos == -1)
	{
		printf("没有你要修改的人\n");
	}
	else
	{
		printf("请输入你的修改内容:\n");
		printf("输入姓名：");
		scanf("%s", p->friend[pos].name);
		printf("输入年龄：");
		scanf("%d", &(p->friend[pos].age));
		printf("输入性别：");
		scanf("%s", p->friend[pos].sex);
		printf("输入电话：");
		scanf("%s", p->friend[pos].phone);
		printf("输入地址：");
		scanf("%s", p->friend[pos].address);
		printf("修改成功\n");
	};
}

void del_storage(Mycon* p)
{
	free(p->friend);
	p->friend = NULL;
}

