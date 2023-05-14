
#include<stdio.h>
#include<string.h>
 int main()
 {   int i,j;
    
    struct Employee
 {
     int id;
     char name[20];
     int salary;
 } ; 
  struct Employee e[10], temp;
  for(i=0;i<5;i++)
   {
    printf("enter the employee id, name,salary ");
    scanf("%d",&e[i].id);
   scanf("%s",e[i].name);
    scanf("%d",&e[i].salary);
    }
 for(i=0;i<5;i++) // sorting according to name
 {
     for(j=0;j<5-i;j++)
     {
         if(strcmp(e[j].name,e[j+1].name)>0);
         {
             temp=e[j];
             e[j]=e[j+1];
             e[j+1]=temp;
         }
     }

 }
     
    for(i=0;i<5;i++)
   {
    printf("%d %s %d \n",e[i].id,e[i].name,e[i].salary);
   }
     return 0;
 }