#include<stdio.h>

struct empl
{
 int emp;
 char name[20];

};

int main()
{ int i;
struct empl e[5];
for(i=0;i<5;i++)
{printf("enter empid: ");
scanf("%d",&e[i].emp);
printf("enter empname: ");
scanf("%s",&e[i].name);
}

for(i=0;i<5;i++)
{
printf("\n empid is %d ",e[i].emp);
printf("\n name is %s ",e[i].name);
}
}
