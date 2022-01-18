#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//#define MAx 1000
#define Min 3
#define Maxnum 20
#define Maxaddress 30

struct Myconmmunication
{
	//姓名、年龄、性别、电话、地址
	char name[Maxnum];
	int age;
	char sex[Maxnum];
	int phone[Maxnum];
	char address[Maxaddress];
};

enum Myfriend
{
	EXIT,
	ADD,
	DELETE,//删除
	STAMP,//打印
	REVISE,//修改
	SEEK,//查找
	SAVE//存储
};

typedef struct Mycon
{
	int num;
	int storage;	//记录当前内存存放的数量
	struct Myconmmunication *friend;
}Mycon;

void cs_storage(Mycon* p);//测试内存

void csh_myconmmunication( Mycon* ps);//初始化通讯录

void add_conmmunication( Mycon* p);//添加通讯录

void stamp_conmmunication(const  Mycon* p);//打印通讯录

void delete_conmmunication( Mycon* p);//删除通讯录的人

void seek_conmmunication(const Mycon* p);//查找通讯录

void revise_communication(struct Mycon* p);//修改通讯录

void del_storage(Mycon* p);//释放内存

void save_conmmunication(Mycon* p);//存储信息

void load_conmmunication(Mycon* p);//存到通讯录上