#include <stdio.h>
#include <string.h>
struct Sutdent
	{
		char sutdent_ID[17];
		int seat1;
		int seat2;
	}student[1000];
int main()
{
	int Iint[1000];
	int i,j,n,a;
	printf("��������");
	scanf("%d",&a);
	for (i = 0; i < a; i++)
	{
		scanf("%s %d %d",&student[i].sutdent_ID,&student[i].seat1,&student[i].seat2);
	}
	scanf("%d", &n);
	for (j = 0; j < n; j++)
	{
		scanf("%d",&Iint[j]);
	}
	for (j = 0; j < n; j++)
	{
		int M;
		for (i = 0; i < a; i++)
		{
			if (Iint[j] == student[i].seat1)
			{
				M = i; break;
			}
		}
		printf("%s %d\n",student[M].sutdent_ID,student[M].seat2);
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10000];
	char b[1000];
	char *p=a;
	int c=0;
	printf("���ˣ��������ַ���:");
	gets(a);
	strlwr(a);
	printf("\n");
	printf("���ˣ�����������Ҫ���ҵľ���:");
	gets(b);
	printf("\n");
	while((p=strstr(p,b))!=NULL)
	{
      c++;
		p++;
	}
	printf("�װ������ˣ��������ݵĸ���Ϊ��%d\n",c);
 }