#include<stdio.h>

 int main()
 {  
    struct Employee
 {
     int id;
     char name[20];
     int salary;
 } e1; 
    printf("enter the employee id, name,salary ");
    scanf("%d",&e1.id);
   scanf("%s",e1.name);
    scanf("%d",&e1.salary);
    printf("%d %s %d",e1.id,e1.name,e1.salary);
    
     return 0;
 }