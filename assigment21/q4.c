
#include<stdio.h>
 int main()
 {   int i,j,temp;
    struct Employee
 {
     int id;
     char name[20];
     int salary;
 } ; 
  struct Employee e[10];
  for(i=0;i<5;i++)
   {
    printf("enter the employee id, name,salary ");
    scanf("%d",&e[i].id);
   scanf("%s",e[i].name);
    scanf("%d",&e[i].salary);
    }
 for(i=0;i<5;i++)
 {
     for(j=0;j<5-i;j++)
     {
         if(e[j].salary>e[j+1].salary)
         {
             temp=e[j].salary;
             e[j].salary=e[j+1].salary;
             e[j+1].salary=temp;
         }
     }

 }
     
    printf("%d %s %d  has the higest salary among all\n",e[4].id,e[4].name,e[4].salary);

     return 0;
 }