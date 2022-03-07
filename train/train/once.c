#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//1. 编程，统计在所输入的50个实数中有多少个正数、多少个负数、多少个零。

//int main()
//{
//	int arr;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("输入实数:");
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
//	printf("输入的正数:%d个\t负数:%d个\t零:%d个\t", a, b, c);
//}



//2. 编程，计算并输出方程X2 + Y2 = 1989的所有整数解。

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



//3. 编程，输入一个10进制正整数，然后输出它所对应的八进制、十六进制数。

//int main()
//{
//	int m;
//	printf("输入你的十进制数：");
//	scanf("%d", &m);
//	printf("八进制：%o\t十六进制：%x\n", m, m);
//}



//4. 一个数如恰好等于它的因子之和，这个数就称为“完数”。
//编程序找出1000以内的所有完数，并输出其因子（6是一个"完数"，它的因子是1, 2, 3）。

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
//		num = 0;//清零
//	}
//}



//5. 输入一个正整数，输出它的所有质数因子（如180的质数因子为 2、2、3、3、5）。

//int sushu(int n)//检测是否为质数
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
//	printf("输入一个数：");
//	scanf("%d", &num);
//	if (sushu(num))
//	{
//		printf("1 %d", num);	//判断是否如7，13这样的数
//	}
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i==0 && sushu(i))
//		{
//			int t = num;
//			printf("%d ", i);
//			while((t = t / i)%i==0)//如果用if就只是在那上面基础上判断一次
//				printf("%d ", i);
//		}
//	}
//	printf("\n");
//	getch();
//	return 0;
//}



// 6. 输入20个整数存入一数组，输出其中能被数组中其它元素整除的那些数组元素。

//int main()
//{
//	int i;
//	int n = 20;
//	int arr[20];
//	for (i = 0; i < n; i++)
//	{
//		printf("输入第%d个数：", i+1);
//		scanf("%d",&arr[i]);
//	}
//	printf("\n");
//	while (n>=0)
//	{
//		for ( i = 0; i < n-1; i++)
//		{
//			if (arr[n-1]%arr[i]==0)
//			{
//				printf("%d能被%d整除\n", arr[n-1], arr[i]);
//			}
//		}
//		n--;
//	}
//	return 0;
//}



//7. 输入两个数组（数组元素个数自定），输出在两个数组中都出现的元素
//（如a[5]={2,3,4,5,6}，b[6]={3,5,7,9,10,-1}，则输出3、5）。

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



//8. 输入两个数组（数组元素个数自定），输出在两个数组中都不出现的元素
//（如a[5] = { 2,3,4,5,6 }，b[6] = { 3,5,7,9,10,-1 }，则输出2、4、6、3、7、9、10、 - 1）。

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



//9．编程，将字符数组S2中的全部字符拷贝到字符数组S1中（不用strcpy函数）。

//int main()
//{
//	char a[20], b[20];
//	int i = 0;
//		printf("输入你的S1字符：");
//		scanf("%s", &a);
//		printf("输入你的S2字符：");
//		scanf("%s", &b);
//		while ((a[i++] = b[i]) != '\0');
//		printf("拷贝后S1:%s", a);
//}



// 10．给定年份year，判别该年份是否闰年（定义一个宏以判别该年份是否闰年）。
//(闰年能被4整除不能被100整除&&能被400整除)

//#define RUNNIAN(n) if(n % 4 == 0&& n % 100 != 0||n % 400 == 0);printf("%d年是闰年\n",n)
//int main()
//{
//	int n;
//	printf("输入你的年份:");
//	scanf("%d", &n);
//	RUNNIAN(n);
//}



// 11．输入一行小写字母后，将字母变成其下一字母（a变成b、b变成c、c变成d、…、x变成y、y变成z、z变成a）输出。

//int main()
//{
//	char num[52];
//	int i = 0;
//	printf("输入你的字母：");
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



//12. 编写一个函数，处理n行、n列的二维数组：将每一行的元素同除以该行上绝对值最大的元素。

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



// 13. 编写函数，求任意阶多项式 a0+a1X+a2X2+...+anXn  的值并返回多项式的值。

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
//	printf("%f", fs(b, 2, 4));//以2为底到4次幂
//}



//14. 设计一个函数，使给出一个数的原码，能得到该数的补码。

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



//15. 编写函数，求m行、n列的二维数组全体元素中负数的个数。

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



//   16. 编写函数，返回在一个整数组中出现次数最多的数及其出现次数。

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
//	printf("%d 最多，出现了%d次", k,count);
//}



//  17．编一个程序，打入月份号，输出该月的英文月名，要求用指针数组处理。

//int main()
//{
//	char *arr[12] = { "January","February","March","April",
//			"June","July","August","September","October","November","December" };
//	int n;
//	printf("输入该月份：");
//	scanf("%d", &n);
//	printf("\n");
//	if (n > 0 && n < 13)
//		printf("该月的英文名：%s\n", arr[n - 1]);
//	else
//		printf("输入错误\n");
//}



//18．编写递归函数，将输入的以“？”结束的字符串按与输入相反的顺序输出。

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



//19. 编写函数，在n个元素的一维数组中，统计比相邻元素大的数组元素个数并将统计数返回
//（不考虑a[0]和a[n-1]）,要求以指针变量而不是数组名作参数。

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


//20. 编写函数，在n个元素的一维数组中，找出最大值、最小值并传送到调用函数。

//void fun(int* arr, int n, int* max, int* min)
//{
//	*max =*arr, *min =*arr;//应该是等于首元素地址的值
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



//21. 编写一个函数，统计m行n列二维数组中有多少个正数、多少个负数，多少个零，并返回统计结果。

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
//	printf("正数=%d，负数=%d，零=%d", zs, fs, zero);
//}



//22. 写一函数，在给定的一行以"."结束的字符中，找出最长的单词并输出。

//void fun(char* a)
//{
//	char *p1, *p2, *p3;//*p3为最长的首元素地址，*p1当前记录的首元素地址
//	int k1 = 0, k2 = 0;//k1为最长的，k2记录每个单词的长度，传给k1
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
//	if (k2 > k1)//判断最长的在后面
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



// 23. 编写一个函数print，打印一个学生的成绩数组，该数组中有5个学生的数据记录，
//每个记录包括num,name,score[3]，用主函数输入这些记录，用print函数输出这些记录。

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
//			(*(s + i)).score[1], (*(s + i)).score[2]);//也可以（s+i）->name…………
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



//24. 把文本文件d1.txt复制到文本文件d2.txt中，要求仅复制d1.dat中的英文字符。

//int main()
//{
//	FILE* fpd1, *fpd2;
//	char ch, infile[10], outfile[10];
//	printf("输入读入的文件：");
//	scanf("%s", infile);
//	printf("输入输出的文件：");
//	scanf("%s", outfile);
//	if ((fpd1 = fopen(infile, "r")) == NULL)//if ((fpd1 = fopen(infile, "r") == NULL))这会报错
//	{
//		printf("无法打开文件\n");
//		exit(0);
//	}
//	if ((fpd2 = fopen(outfile, "w")) == NULL)//打开一个新的文件，有的话之前的清除
//	{
//		printf("无法打开文件\n");
//		exit(0);
//	}
//	while (!feof(fpd1))
//	{	
//		ch = fgetc(fpd1);//从fpd1指向的文件读入一个字符
//		if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z')
//		{
//			fputc(ch, fpd2);//只能打印一个字符
//			putchar(ch);
//		}
//	}
//	putchar(10);
//	fclose(fpd1);
//	fclose(fpd2);
//	return 0;
//}




//25. 编程，把文本文件d1.dat复制到d2.dat（其中空格字符不复制）。

//int main()
//{
//	FILE * in,*on;
//	char ch, infile[10], onfile[10];
//	printf("输入读入文件：");
//	scanf("%s", infile);
//	printf("输入读出文件：");
//	scanf("%s", onfile);
//	if ((in = fopen(infile, "r")) == NULL)
//	{
//		printf("无法打开文件\n");
//		exit(0);
//	}
//	if ((on = fopen(onfile, "w")) == NULL)
//	{
//		printf("无法打开文件\n");
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



//26. 编程，把文本文件d1.dat复制到d2.dat（其中大写英文字母要转换为小写字母）。

//int main()
//{
//	FILE* in, *on;
//	char ch, infile[10], onfile[10];
//	printf("输入读入的文件：");
//	scanf("%s", infile);
//	printf("输入读出的文件：");
//	scanf("%s", onfile);
//	if ((in = fopen(infile, "r")) == NULL)
//	{
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	if ((on = fopen(onfile, "w")) == NULL)
//	{
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	ch = getchar();//用来接受最后的回车符
//	printf("输入你要输入的字符\n");
//	ch = getchar();
//	while (ch!='\n')
//	{
//		//ch = fgetc(in);
//		if (ch >= 'A'&&ch <= 'Z')
//			ch = ch + 32;
//		fputc(ch, on);
//		putchar(ch);//打印在屏幕上
//		ch = getchar();
//	}
//	putchar(10);
//	fclose(in);
//	fclose(on);
//	return 0;
//}



//27. 把文本文件d1.dat复制到文本文件d2.dat中，要求仅复制d1.dat中除英文字符和数
//字以外的其它内容。

//int main()
//{
//	FILE* in, *on;
//	char ch, infile[10], onfile[10];
//	printf("输入读入的文件：");
//	scanf("%s", infile);
//	printf("输入读出的文件：");
//	scanf("%s", onfile);
//	if ((in = fopen(infile, "r")) == NULL)
//	{
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	if ((on = fopen(onfile, "w")) == NULL)
//	{
//		printf("文件打开失败\n");
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



//28. 求出1至100之间的素数（只能被1和自身整除的数）并顺序写入文件su.dat。

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


