
#include<stdio.h>
 int main()
 {   int i,n;
 printf(" enter the total number of the students");
 scanf("%d",&n);
    struct Student
 {
     int roll;
     char name[20];
     int class;
 } ; 
  struct Student s[n];
  for(i=0;i<n;i++)
   {
    printf("enter the %d student roll, name,class ",i+1);
    scanf("%d",&s[i].roll);
   scanf("%s",s[i].name);
    scanf("%d",&s[i].class);
    }

     
    for(i=0;i<n;i++)
   {
    printf("%d %s %d \n",s[i].roll,s[i].name,s[i].class);
   }
     return 0;
 }