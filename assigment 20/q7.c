#include<stdio.h>
 void  count(char*);
 void main()
 { int i;
    char str[20];
      printf("enter the array ");
      fgets(str,20,stdin);
      for(i=0;str[i];i++);
      str[i-1]='\0'; /// to remove the new line charechter taken by the fgets funtion at the last of the string
       count(str);
 }
 void count(char *p)
{ int i=0,consonant=0, vowel=0;
    while(*(p+i)!='\0')
{
  if(*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U'||*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
vowel++;
else
consonant++;
i++;
}
 printf("%d=vowels and %d=consonant",vowel,consonant);

}

