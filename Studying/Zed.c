#include <stdio.h> 
#include <string.h>
#include <conio.h>

void input(int b[][7],char ir[][10]);
void hakjum(int b[][7]);
void ranking(int b[][7]);
void output(int b[][7],char ir[][10]);
void sorting(int b[][7],char ir[][10]);

void main()
{
 int a[3][7]={0};
 char name[3][10];
 input(a,name);//�Է��Լ� ,�̸����� ����  
 hakjum(a);//������ ���ϴ� �Լ�  
 ranking(a);//������ ���ϴ� �Լ�  
 output(a,name); //���
 sorting(a,name); //���� �������� �з� 
 output(a,name); //���
}
void input(int b[][7],char ir[][10])
{
 int i,j,k;
 char km[6];//���� ���� ���� �̶�� ����ǥ��  
 for(i=0;i<=5;i++)
 { 
 printf("�̸����Է��ϼ���");
 scanf("%s",ir[i]); 
  for(j=0;j<=2;j++)
  {
   if(j==0)  //j�� 0�̸� ù���������̸� ����
   strcpy(km,"����");
   else if(j==1)
     strcpy(km,"����");
   else 
    strcpy(km,"����");      
   printf("%d�� %s�������Է��ϼ���",i+1,km);
   scanf("%d",&b[i][j]);//�Ѱ����� �Է� 
    b[i][3]=b[i][3]+b[i][j];        //���� ���� 
  }
    b[i][4]=b[i][3]/3;   //����� ����   
 }
 
}
void hakjum(int b[][7])//������ ���ϴ� ���� 
{
 int i,j;
 for(i=0;i<=2;i++)
 {
  switch(b[i][4]/10)//������� ����..99 98  97 94 /10
  {
   case 10:
   case  9:
    b[i][5]=65;//  65 A����   97   a
    break;
   case 8:
    b[i][5]=66;
    break;
   case 7:
    b[i][5]=67;
    break;
   case 6:
    b[i][5]=68;
   default://�̿��� ���̸�....59���ϸ� 
     b[i][5]=70;
  } 
 } 
 
}
void ranking(int b[][7])
{
 int i,j;
 for(i=0;i<=2;i++)//���� 
 {
  b[i][6]=1;//������ �����ҋ����� �׻� 1�� �ν� 
  for(j=0;j<=2;j++)//�� 
  {
   if(b[i][3]<b[j][3])//���������� ���������� ������  
   b[i][6]++;   //������ 1�� ����  
  }
 } 
} 
void output(int b[][7],char ir[][10])
{ int i,j;
 for(i=0;i<=2;i++)//���� 
 { 
  printf("%s",ir[i]); 
  for(j=0;j<=6;j++)//���� 
  { 
   if(j==5)
   printf("  %c ",b[i][j]);
   else
   printf(" %3d ",b[i][j]);
  }
  printf("\n");
 } 
 printf("\n");printf("\n");printf("\n");
}
void sorting(int b[][7],char ir[][10])
{
 int i,j,cc,p;
 char sname[10];
 for(i=0;i<=2-1;i++)
 {
  for(j=i+1;j<=2;j++)
  {
   if(b[i][3]>b[j][3])
   {
       strcpy(sname,ir[i]);
       strcpy(ir[i],ir[j]);
       strcpy(ir[j],sname);
       
    for(p=0;p<=6;p++)
    { 
    cc=b[i][p];
    b[i][p]=b[j][p];
    b[j][p]=cc;
    } 
   }
  }
 } 
}
