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
	//���������䡢�Ա𡢵绰����ַ
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
	DELETE,//ɾ��
	STAMP,//��ӡ
	REVISE,//�޸�
	SEEK,//����
	SAVE//�洢
};

typedef struct Mycon
{
	int num;
	int storage;	//��¼��ǰ�ڴ��ŵ�����
	struct Myconmmunication *friend;
}Mycon;

void cs_storage(Mycon* p);//�����ڴ�

void csh_myconmmunication( Mycon* ps);//��ʼ��ͨѶ¼

void add_conmmunication( Mycon* p);//���ͨѶ¼

void stamp_conmmunication(const  Mycon* p);//��ӡͨѶ¼

void delete_conmmunication( Mycon* p);//ɾ��ͨѶ¼����

void seek_conmmunication(const Mycon* p);//����ͨѶ¼

void revise_communication(struct Mycon* p);//�޸�ͨѶ¼

void del_storage(Mycon* p);//�ͷ��ڴ�

void save_conmmunication(Mycon* p);//�洢��Ϣ

void load_conmmunication(Mycon* p);//�浽ͨѶ¼��