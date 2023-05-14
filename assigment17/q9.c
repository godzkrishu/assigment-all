
#include<stdio.h>//hashing technique
 int main()
 {
     int i,j;
      char a[20]="krishna";
      char hash[127]={0};
      /* printf("enter the string");
       scanf("%s",&a);*/
       for(i=0;a[i]!='\0';i++)
       hash[a[i]]++;

        printf(" the sorted array is ");
        for(i=0;i<127;i++)
        { 
            if(hash[i]!='\0')
            {
                for(j=0;j<hash[i];j++)//this loop is to print the repeated charecter in the strig
                printf("%c",i);
            }
        }

      
  
  return 0;
 }