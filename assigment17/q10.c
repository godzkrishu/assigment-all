
//hashing technique
#include<stdio.h>
#include<string.h>
 int main()
 {
     int i,j;
     
      char a[20];
       printf("enter the string");
       fgets(a,50,stdin);
       a[strlen(a)]='\0'; // this is done to remove newline charecter taken by fgets at the end of the string by null'\n'
      char hash[127]={0};
      
       for(i=0;a[i]!='\0';i++)
       hash[a[i]]++;

       
        for(i=0;i<127;i++)
        { 
            if(hash[i]!='\0')
            {
                printf("%c=>%d ",i,hash[i]);
                printf("\n");
            }
            
        }

      
  
  return 0;
 }