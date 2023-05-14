#include<stdio.h>
 struct student
 {
    int roll_no;
     char name[20];
      int chem_marks;
      int math_marks;
      int physics_marks;
      float total;
 } s[5];
 int main()
 { int i;
  for(i=0;i<5;i++)
  { printf(" Enter the %d students Roll_no, Name and chemistry, math ,physics marks",i);
   scanf("%d%s%d%d%d",&s[i].roll_no,s[i].name,&s[i].chem_marks,&s[i].math_marks,&s[i].physics_marks);
   s[i].total= (s[i].chem_marks+s[i].math_marks+s[i].physics_marks)/100;
    }
   
    for(i=0;i<5;i++)
    {
        printf(" \n %d %d %s has  %f percent ",i,s[i].roll_no,s[i].name,s[i].total);
    }

    return 0;
 }