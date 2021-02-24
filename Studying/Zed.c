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
 input(a,name);//입력함수 ,이름까지 전달  
 hakjum(a);//학점을 구하는 함수  
 ranking(a);//석차를 구하는 함수  
 output(a,name); //출력
 sorting(a,name); //총점 오름차순 분류 
 output(a,name); //출력
}
void input(int b[][7],char ir[][10])
{
 int i,j,k;
 char km[6];//국어 영어 수학 이라는 문자표시  
 for(i=0;i<=5;i++)
 { 
 printf("이름을입력하세요");
 scanf("%s",ir[i]); 
  for(j=0;j<=2;j++)
  {
   if(j==0)  //j가 0이면 첫번쨰과목이면 국어
   strcpy(km,"국어");
   else if(j==1)
     strcpy(km,"영어");
   else 
    strcpy(km,"수학");      
   printf("%d번 %s점수를입력하세요",i+1,km);
   scanf("%d",&b[i][j]);//한과목을 입력 
    b[i][3]=b[i][3]+b[i][j];        //총점 구할 
  }
    b[i][4]=b[i][3]/3;   //평균을 구함   
 }
 
}
void hakjum(int b[][7])//학점을 구하는 과정 
{
 int i,j;
 for(i=0;i<=2;i++)
 {
  switch(b[i][4]/10)//평균으로 학점..99 98  97 94 /10
  {
   case 10:
   case  9:
    b[i][5]=65;//  65 A학점   97   a
    break;
   case 8:
    b[i][5]=66;
    break;
   case 7:
    b[i][5]=67;
    break;
   case 6:
    b[i][5]=68;
   default://이외의 값이면....59이하면 
     b[i][5]=70;
  } 
 } 
 
}
void ranking(int b[][7])
{
 int i,j;
 for(i=0;i<=2;i++)//기준 
 {
  b[i][6]=1;//기준이 변경할떄마다 항상 1등 인식 
  for(j=0;j<=2;j++)//비교 
  {
   if(b[i][3]<b[j][3])//기준점수가 비교점수보다 작으면  
   b[i][6]++;   //석차는 1씩 증가  
  }
 } 
} 
void output(int b[][7],char ir[][10])
{ int i,j;
 for(i=0;i<=2;i++)//기준 
 { 
  printf("%s",ir[i]); 
  for(j=0;j<=6;j++)//과목 
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
