#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//1. ��̣�ͳ�����������50��ʵ�����ж��ٸ����������ٸ����������ٸ��㡣

//int main()
//{
//	int arr;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("����ʵ��:");
//		scanf("%d", &arr);
//		if (arr > 0)
//		{
//			a++;
//		}
//		if (arr < 0)
//		{
//			b++;
//		}
//		if (arr == 0)
//		{
//			c++;
//		}
//	}
//	printf("���������:%d��\t����:%d��\t��:%d��\t", a, b, c);
//}



//2. ��̣����㲢�������X2 + Y2 = 1989�����������⡣

//int main()
//{
//	int x ;
//	int y ;
//	for ( x = 0; x < (int)sqrt(1989); x++)
//	{
//		for ( y = 0; y < (int)sqrt(1989); y++)
//		{
//			if (x * x + y * y == 1989)
//			{
//				printf("x=%d,y=%d\n", x, y);
//			}
//		}
//	}
//}



//3. ��̣�����һ��10������������Ȼ�����������Ӧ�İ˽��ơ�ʮ����������

//int main()
//{
//	int m;
//	printf("�������ʮ��������");
//	scanf("%d", &m);
//	printf("�˽��ƣ�%o\tʮ�����ƣ�%x\n", m, m);
//}



//4. һ������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
//������ҳ�1000���ڵ���������������������ӣ�6��һ��"����"������������1, 2, 3����

//int main()
//{
//	int num = 0;
//	for (int i = 1; i <= 1000; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			if (i%j==0)
//			{
//				num += j;
//				if (num==i)
//				{
//					printf("%d\t", i);
//				}
//			}
//		}
//		num = 0;//����
//	}
//}



//5. ����һ����������������������������ӣ���180����������Ϊ 2��2��3��3��5����

//int sushu(int n)//����Ƿ�Ϊ����
//{
//	for (int j = 2; j < n; j++)
//	{
//		if (n%j==0)
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int num;
//	printf("����һ������");
//	scanf("%d", &num);
//	if (sushu(num))
//	{
//		printf("1 %d", num);	//�ж��Ƿ���7��13��������
//	}
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i==0 && sushu(i))
//		{
//			int t = num;
//			printf("%d ", i);
//			while((t = t / i)%i==0)//�����if��ֻ����������������ж�һ��
//				printf("%d ", i);
//		}
//	}
//	printf("\n");
//	getch();
//	return 0;
//}



// 6. ����20����������һ���飬��������ܱ�����������Ԫ����������Щ����Ԫ�ء�

//int main()
//{
//	int i;
//	int n = 20;
//	int arr[20];
//	for (i = 0; i < n; i++)
//	{
//		printf("�����%d������", i+1);
//		scanf("%d",&arr[i]);
//	}
//	printf("\n");
//	while (n>=0)
//	{
//		for ( i = 0; i < n-1; i++)
//		{
//			if (arr[n-1]%arr[i]==0)
//			{
//				printf("%d�ܱ�%d����\n", arr[n-1], arr[i]);
//			}
//		}
//		n--;
//	}
//	return 0;
//}



//7. �����������飨����Ԫ�ظ����Զ�������������������ж����ֵ�Ԫ��
//����a[5]={2,3,4,5,6}��b[6]={3,5,7,9,10,-1}�������3��5����

//int main()
//{
//	int a[] = { 2,3,4,5,6 };
//	int b[] = { 3,5,7,9,10,-1 };
//	for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
//	{
//		for (int j = 0; j < sizeof(b)/sizeof(b[0]); j++)
//		{
//			if (a[i]==b[j])
//			{
//				printf("%d ", a[i]);
//			}
//		}
//	}
//}



//8. �����������飨����Ԫ�ظ����Զ�������������������ж������ֵ�Ԫ��
//����a[5] = { 2,3,4,5,6 }��b[6] = { 3,5,7,9,10,-1 }�������2��4��6��3��7��9��10�� - 1����

//int main()
//{
//	int a[] = { 2,3,4,5,6 };
//	int b[] = { 3,5,7,9,10,-1 };
//	int i, j;
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		for (j = 0; j < sizeof(b) / sizeof(b[0]); j++)
//		{
//			if (a[i] == b[j])
//			{
//				break;
//			}
//		}
//		if (j == sizeof(b) / sizeof(b[0]))
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(b) / sizeof(b[0]); i++)
//	{
//		for (j = 0; j < sizeof(a) / sizeof(a[0]); j++)
//		{
//			if (b[i] == a[j])
//			{
//				break;
//			}
//		}
//		if (j == sizeof(a) / sizeof(a[0]))
//		{
//			printf("%d ", b[i]);
//		}
//	}
//}



//9����̣����ַ�����S2�е�ȫ���ַ��������ַ�����S1�У�����strcpy��������

//int main()
//{
//	char a[20], b[20];
//	int i = 0;
//		printf("�������S1�ַ���");
//		scanf("%s", &a);
//		printf("�������S2�ַ���");
//		scanf("%s", &b);
//		while ((a[i++] = b[i]) != '\0');
//		printf("������S1:%s", a);
//}



// 10���������year���б������Ƿ����꣨����һ�������б������Ƿ����꣩��
//(�����ܱ�4�������ܱ�100����&&�ܱ�400����)

//#define RUNNIAN(n) if(n % 4 == 0&& n % 100 != 0||n % 400 == 0);printf("%d��������\n",n)
//int main()
//{
//	int n;
//	printf("����������:");
//	scanf("%d", &n);
//	RUNNIAN(n);
//}



// 11������һ��Сд��ĸ�󣬽���ĸ�������һ��ĸ��a���b��b���c��c���d������x���y��y���z��z���a�������

//int main()
//{
//	char num[52];
//	int i = 0;
//	printf("���������ĸ��");
//	scanf("%s", &num);
//#if(1)
//	while (num[i]!='\0')
//	{
//		if (num[i] >= 'a'&&num[i] <= 'z')
//		{
//			if (num[i] == 'z')
//				num[i] = 'a';
//			else
//				num[i]++; i++;	//num[i]=num[0]+'i'
//		}
//	}
//#endif
//	printf("%s",num);
//}



//12. ��дһ������������n�С�n�еĶ�ά���飺��ÿһ�е�Ԫ��ͬ���Ը����Ͼ���ֵ����Ԫ�ء�

//void div(float**a, int n)
//{
//	int i, j;
//	float x;
//	for (i = 0; i < n; i++)
//	{
//		x = *(*(a + i));
//		for (j = 1; j < n; j++)
//		{
//			if (fabs(*(*(a + i) + j)) > fabs(x))
//				x = *(*(a + i) + j);
//		}
//		for (j = 0; j < n; j++)
//			*(*(a + i) + j) /= x;
//	}
//	return;
//}
//int main()
//{
//	float b[3][3] = { {1,2,3} ,{4,5,6}, {7,8,9} };
//	float *c[3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//		c[i]=b[i];
//	div(c, 3);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		printf("%f ",b[i][j]);
//		printf("\n");
//	}
//}



// 13. ��д������������׶���ʽ a0+a1X+a2X2+...+anXn  ��ֵ�����ض���ʽ��ֵ��

//float fs(float* a, int x, int n)
//{
//	float y = 0, t = 1;
//	for (int i = 0; i < n; i++)
//	{
//		y += *(a + i)*t;
//		t *= x;
//	}
//	return y;
//}
//void main()
//{
//	float b[] = { 1,2,3,4 };
//	printf("%f", fs(b, 2, 4));//��2Ϊ�׵�4����
//}



//14. ���һ��������ʹ����һ������ԭ�룬�ܵõ������Ĳ��롣

//unsigned int ma(unsigned int num)
//{ 
//	if (num >> 15)
//		return (num ^ 0x7fff) + 1;
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0x800c, k;
//	k = ma(num);
//	printf("%x", k);
//}



//15. ��д��������m�С�n�еĶ�ά����ȫ��Ԫ���и����ĸ�����

//int kk(int** b,int m,int n)
//{
//	int y = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (*(*(b+i)+j) < 0)
//				y++;
//		}
//	}
//	return y;
//}
//int main()
//{
//	int a[3][3] = { 1,2,3,-1,-2,-3,5,-7,-8 };
//	int* c[3];
//	for (int i = 0; i < 3; i++)
//		c[i] = a[i];
//	printf("%d\n", kk(c, 3, 3));
//}



//   16. ��д������������һ���������г��ִ���������������ִ�����

//int zuiduo(int*arr,int n,int* count,int*k)
//{
//	int i, j, y;
//	*count = 0;
//	for (i = 0; i < n; i++)
//	{
//		y = 0;
//		for (j = 0; j <n ; j++)
//			if (*(arr + i) == *(arr + j))
//				y++;
//			if (y > *count)
//			{
//				*count = y;
//				*k = *(arr + i);
//			}
//	}
//	return;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,2,3,5,6,2 };
//	int count, k;
//	zuiduo(arr,10,&count,&k);
//	printf("%d ��࣬������%d��", k,count);
//}



//  17����һ�����򣬴����·ݺţ�������µ�Ӣ��������Ҫ����ָ�����鴦��

//int main()
//{
//	char *arr[12] = { "January","February","March","April",
//			"June","July","August","September","October","November","December" };
//	int n;
//	printf("������·ݣ�");
//	scanf("%d", &n);
//	printf("\n");
//	if (n > 0 && n < 13)
//		printf("���µ�Ӣ������%s\n", arr[n - 1]);
//	else
//		printf("�������\n");
//}



//18����д�ݹ麯������������ԡ������������ַ������������෴��˳�������

//void digui()
//{
//	char n;
//	if ((n = getchar()) != '?')
//	{
//		digui();
//		putchar(n);
//	}
//	return;
//}
//int main()
//{
//	digui();
//	printf("\n");
//}



//19. ��д��������n��Ԫ�ص�һά�����У�ͳ�Ʊ�����Ԫ�ش������Ԫ�ظ�������ͳ��������
//��������a[0]��a[n-1]��,Ҫ����ָ�������������������������

//int fun(int* arr, int n)
//{
//	int i, k = 0;
//	for (i = 0; i < n; i++)
//		if (*(arr + i) > *(arr + i + 1) && *(arr + i) > *(arr + i - 1))
//			k++;
//	return k;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,6,7,5,4,3,4,9 };
//	printf("%d", fun(arr, sizeof(arr) / 4));
//}


//20. ��д��������n��Ԫ�ص�һά�����У��ҳ����ֵ����Сֵ�����͵����ú�����

//void fun(int* arr, int n, int* max, int* min)
//{
//	*max =*arr, *min =*arr;//Ӧ���ǵ�����Ԫ�ص�ַ��ֵ
//	for (int i = 0; i < n; i++)
//		{
//			if (*(arr + i) > *max)
//				 *max = *(arr + i);
//			if (*(arr + i) < *max)
//				 *min = *(arr + i);
//		}
//	return;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,9,8,5,-1 };
//	int max , min ;
//	fun(arr, sizeof(arr) / 4, &max, &min);
//	printf("max=%d,min=%d", max, min);
//}



//21. ��дһ��������ͳ��m��n�ж�ά�������ж��ٸ����������ٸ����������ٸ��㣬������ͳ�ƽ����

//void fun(int**abb, int* zs, int* fs, int* zero ,int n)
//{
//	int i, j;
//	*zero = 0, *fs = 0, *zs = 0;
//	for(i=0;i<n;i++)
//		for (j = 0; j < n; j++)
//		{
//			if (*(*(abb + i) + j) == 0)
//				(*zero)++;
//			if (*(*(abb + i) + j) > 0)
//				(*zs)++;
//			if (*(*(abb + i) + j) < 0)
//				(*fs)++;
//		}
//	return;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,-1,-2,0,4,-3,-6,0 };
//	int* abb[3];
//	int zs,fs, zero;
//	for (int i = 0; i < 3; i++)
//	{
//		abb[i] = arr[i];
//	}
//	fun(abb, &zs, &fs, &zero,3);
//	printf("����=%d������=%d����=%d", zs, fs, zero);
//}



//22. дһ�������ڸ�����һ����"."�������ַ��У��ҳ���ĵ��ʲ������

//void fun(char* a)
//{
//	char *p1, *p2, *p3;//*p3Ϊ�����Ԫ�ص�ַ��*p1��ǰ��¼����Ԫ�ص�ַ
//	int k1 = 0, k2 = 0;//k1Ϊ��ģ�k2��¼ÿ�����ʵĳ��ȣ�����k1
//	p1 = p2 = p3 = a;
//	while (*p2 != '.')
//	{
//		if (*p2 != ' ')
//		{
//			k2++;
//			p2++;
//		}
//		else if (k2 > k1)
//		{
//			p1 = ++p2;
//			p3 = p1;
//			k1 = k2;
//			k2 = 0;
//		}
//		else
//		{
//			k2 = 0;
//			p1 = ++p2;
//		}
//	}
//	if (k2 > k1)//�ж�����ں���
//	{
//		k1 = k2;
//		k2 = 0;
//	}
//	for (k2 = 0; k2 <= k1; k2++)
//		printf("%c", *(p3 + k2));
//	printf("\n");
//	return;
//}
//int main()
//{
//	char a[40];
//	int i = 0;
//	while ((a[i++] = getchar()) != '.');
//	fun(a);
//}



// 23. ��дһ������print����ӡһ��ѧ���ĳɼ����飬����������5��ѧ�������ݼ�¼��
//ÿ����¼����num,name,score[3]����������������Щ��¼����print���������Щ��¼��

//struct student
//{
//	char name[10],
//		num[3];
//	int score[3];
//};
//void print(struct student *s, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("name=%s num=%s score[1]=%d score[2]=%d score[3]=%d\n"
//			, (*(s + i)).name, (*(s + i)).num, (*(s + i)).score[0], 
//			(*(s + i)).score[1], (*(s + i)).score[2]);//Ҳ���ԣ�s+i��->name��������
//	return;
//}
//int main()
//{
//	struct student t[3];
//	int i;
//	for (i = 0; i < 3; i++)
//		scanf("%s%s%d%d%d", &t[i].name, &t[i].num, &t[i].score[0], &t[i].score[1], &t[i].score[2]);
//	print(t, 3);
//}



//24. ���ı��ļ�d1.txt���Ƶ��ı��ļ�d2.txt�У�Ҫ�������d1.dat�е�Ӣ���ַ���

//int main()
//{
//	FILE* fpd1, *fpd2;
//	char ch, infile[10], outfile[10];
//	printf("���������ļ���");
//	scanf("%s", infile);
//	printf("����������ļ���");
//	scanf("%s", outfile);
//	if ((fpd1 = fopen(infile, "r")) == NULL)//if ((fpd1 = fopen(infile, "r") == NULL))��ᱨ��
//	{
//		printf("�޷����ļ�\n");
//		exit(0);
//	}
//	if ((fpd2 = fopen(outfile, "w")) == NULL)//��һ���µ��ļ����еĻ�֮ǰ�����
//	{
//		printf("�޷����ļ�\n");
//		exit(0);
//	}
//	while (!feof(fpd1))
//	{	
//		ch = fgetc(fpd1);//��fpd1ָ����ļ�����һ���ַ�
//		if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z')
//		{
//			fputc(ch, fpd2);//ֻ�ܴ�ӡһ���ַ�
//			putchar(ch);
//		}
//	}
//	putchar(10);
//	fclose(fpd1);
//	fclose(fpd2);
//	return 0;
//}




//25. ��̣����ı��ļ�d1.dat���Ƶ�d2.dat�����пո��ַ������ƣ���

//int main()
//{
//	FILE * in,*on;
//	char ch, infile[10], onfile[10];
//	printf("��������ļ���");
//	scanf("%s", infile);
//	printf("��������ļ���");
//	scanf("%s", onfile);
//	if ((in = fopen(infile, "r")) == NULL)
//	{
//		printf("�޷����ļ�\n");
//		exit(0);
//	}
//	if ((on = fopen(onfile, "w")) == NULL)
//	{
//		printf("�޷����ļ�\n");
//		exit(0);
//	}
//	while (!feof(in))
//	{
//		ch = fgetc(in);
//		if (ch != ' ')
//		{
//			fputc(ch, on);
//			putchar(ch);
//		}
//	}
//	putchar(10);
//	fclose(in);
//	fclose(on);
//	return 0;
//}



//26. ��̣����ı��ļ�d1.dat���Ƶ�d2.dat�����д�дӢ����ĸҪת��ΪСд��ĸ����

//int main()
//{
//	FILE* in, *on;
//	char ch, infile[10], onfile[10];
//	printf("���������ļ���");
//	scanf("%s", infile);
//	printf("����������ļ���");
//	scanf("%s", onfile);
//	if ((in = fopen(infile, "r")) == NULL)
//	{
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	if ((on = fopen(onfile, "w")) == NULL)
//	{
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	ch = getchar();//�����������Ļس���
//	printf("������Ҫ������ַ�\n");
//	ch = getchar();
//	while (ch!='\n')
//	{
//		//ch = fgetc(in);
//		if (ch >= 'A'&&ch <= 'Z')
//			ch = ch + 32;
//		fputc(ch, on);
//		putchar(ch);//��ӡ����Ļ��
//		ch = getchar();
//	}
//	putchar(10);
//	fclose(in);
//	fclose(on);
//	return 0;
//}



//27. ���ı��ļ�d1.dat���Ƶ��ı��ļ�d2.dat�У�Ҫ�������d1.dat�г�Ӣ���ַ�����
//��������������ݡ�

//int main()
//{
//	FILE* in, *on;
//	char ch, infile[10], onfile[10];
//	printf("���������ļ���");
//	scanf("%s", infile);
//	printf("����������ļ���");
//	scanf("%s", onfile);
//	if ((in = fopen(infile, "r")) == NULL)
//	{
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	if ((on = fopen(onfile, "w")) == NULL)
//	{
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	while (!feof(in))
//	{
//		ch = fgetc(in);
//		if (!(ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z' || ch >= '0'&&ch <= '9'))
//		{
//			fputc(ch, on);
//			putchar(ch);
//		}
//	}
//	putchar(10);
//	fclose(in);
//	fclose(on);
//	return 0;
//}



//28. ���1��100֮���������ֻ�ܱ�1������������������˳��д���ļ�su.dat��

int main()
{
	int m;
	for (int i = 2; i < 100; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i%j == 0)
				m = i;
		}
	}
}


