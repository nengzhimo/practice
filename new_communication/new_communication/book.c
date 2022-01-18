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
	//���ļ����Ѵ����Ϣ���ص�ͨѶ¼��
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
	//дͨѶ¼���ļ���
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
	//��ȡ���е����ݣ������д洢
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
		//����
	struct Myconmmunication* ptr = realloc(p->friend, (p->storage + 1) * sizeof(struct Myconmmunication));
	if (ptr != NULL)
		{
			p->friend = ptr;
			p->storage += 1;
			printf("���ݳɹ�\n");
		}
	else
	   {
			printf("����ʧ��\n");
	   }
	}
}

void add_conmmunication( Mycon* p)
{
		cs_storage(p);//��������
		printf("����������");
		scanf("%s", p->friend[p->num].name);
		printf("�������䣺");
		scanf("%d", &(p->friend[p->num].age));
		printf("�����Ա�");
		scanf("%s", p->friend[p->num].sex);
		printf("����绰��");
		scanf("%s", p->friend[p->num].phone);
		printf("�����ַ��");
		scanf("%s", p->friend[p->num].address);
		p->num++;
		printf("��ӳɹ�\n");
}

void stamp_conmmunication(const  Mycon* p)
{
	printf("% -20s\t% -10s\t% -10s\t% -10s\t% -20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	return -1;//�Ҳ��������
}

void delete_conmmunication( Mycon* p)
{
	char name[Maxnum];
	printf("������Ҫɾ������>");
	scanf("%s", name);
	int pos = findbyname(p, name);
	int j = 0;
	if (pos == -1)			//Ϊ-1��û�ҵ�
	{
		printf("���ݲ�����\n");
	}
	else		//ɾ������
	{
		for (j = pos; j < p->num; j++)
		{
			p->friend[j] = p->friend[j+1];
		}
		p->num--;
		printf("ɾ���ɹ�\n");
	}
}

void seek_conmmunication(const  Mycon* p)
{
	char name[Maxnum];
	printf("������Ҫ�ҵ��ˣ�");
	scanf("%s", name);
	int pos = findbyname(p, name);
	if (pos==-1)
	{
		printf("���ݲ�����\n");
	}
	else
	{
		printf("% -20s\t% -10s\t% -10s\t% -10s\t% -20s\t\n", 
				"����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("��������Ҫ�޸ĵ��ˣ�");
	scanf("%s", name);
	int pos = findbyname(p, name);
	if (pos == -1)
	{
		printf("û����Ҫ�޸ĵ���\n");
	}
	else
	{
		printf("����������޸�����:\n");
		printf("����������");
		scanf("%s", p->friend[pos].name);
		printf("�������䣺");
		scanf("%d", &(p->friend[pos].age));
		printf("�����Ա�");
		scanf("%s", p->friend[pos].sex);
		printf("����绰��");
		scanf("%s", p->friend[pos].phone);
		printf("�����ַ��");
		scanf("%s", p->friend[pos].address);
		printf("�޸ĳɹ�\n");
	};
}

void del_storage(Mycon* p)
{
	free(p->friend);
	p->friend = NULL;
}

