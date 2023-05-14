#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
 char a[9]={'0','1','2','3','4','5','6','7','8'};
int move,flag=0;
char t;

//////////////////////////////////////////////////////////////////////////////////
void upperpart()
{
    printf("\n\n##################### Tic Tac Toe ##################### ");
     printf("\n\t Player 1 = x");
     printf("\n\t Player 2 = O");
}
////////////////////////////////////////////////////////////////////////////////////
void frame()
{
    
     printf("\n\n\t \t %c | %c | %c ",a[0],a[1],a[2]);
     printf("\n\t\t---|---|---");
     printf("\n\t \t %c | %c | %c ",a[3],a[4],a[5]);
     printf("\n\t\t---|---|---");
     printf("\n\t \t %c | %c | %c ",a[6],a[7],a[8]);

}

//////////////////////////////////////////////////////////////////*//////////////////
void lowerpart()
{
   printf("\n\n########################################################");
}


/////////////////////////////////////////////////////////////////
void usermove()
 {
   
 int t;
 printf("\n\nplayer 1st enter...");
     label1:
     scanf("%d",&t);
     move=t;
     if(t<9&&t>=0)
     {  
        if(a[t]=='x'||a[t]=='O')
          goto label1;
        
        else
         a[t]='x';
     }
      else
        goto label1;
   
   }
 ////////////////////////////////////////////////////////////////////////////////  
    void smartmove( int n)
   {  
    int x;
    switch (n)
 {
    case 0: /////////////
 label0:
srand(time(NULL));
x=rand()%9;
if(x!=0&&x!=5&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label0;
 
break;
case 1:////////////////
  label1:
srand(time(NULL));
x=rand()%8;
if(x!=1&&x!=3&&x!=5&&x!=6&&x!=8&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label1;
 
break;
case 2:////////////////
label2:
srand(time(NULL));
x=rand()%9;
if(x!=2&&x!=3&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label2;
 
break;
case 3:////////////////
label3:
srand(time(NULL));
x=rand()%7;
if(x!=1&&x!=3&&x!=2&&x!=7&&x!=8&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label3;
 
break;
case 4:////////////////
label4:
srand(time(NULL));
x=rand()%9;
if(x!=4&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label4;
 
break;
case 5:////////////////
label5:
srand(time(NULL));
x=rand()%9;
if(x!=0&&x!=1&&x!=5&&x!=6&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label5;
 
break;
case 6:////////////////
label6:
srand(time(NULL));
x=rand()%9;
if(x!=1&&x!=5&&x!=6&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label6;
 
break;
case 7:////////////////
label7:
srand(time(NULL));
x=rand()%9;
if(x!=0&&x!=2&&x!=5&&x!=3&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label7;
 
break;
case 8:////////////////
label8:
srand(time(NULL));
x=rand()%8;
if(x!=1&&x!=3&&x!=8&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label8;
 
break;
    }
}
///////////////////////////////////////////////////////////////////////
void wincheck()
{ // checkin  1st player wining condition

if(a[0]==a[1]&&a[1]==a[2])
{
 t=a[0];
flag=1;
}
if(a[0]==a[3]&&a[3]==a[6])
{
 t=a[0];
flag=1;
}
if(a[2]==a[5]&&a[5]==a[8])
{
 t=a[0];
flag=1;
}
if(a[6]==a[7]&&a[7]==a[8])
{
 t=a[0];
flag=1;
}
if(a[1]==a[4]&&a[4]==a[7])
{
 t=a[0];
flag=1;
}
if(a[3]==a[4]&&a[4]==a[5])
{
 t=a[0];
flag=1;
}
if(a[0]==a[4]&&a[4]==a[5])
{
 t=a[0];
flag=1;
}
if(a[6]==a[4]&&a[4]==a[2])
{
 t=a[0];
flag=1;
}
///////Draw condition////////////
int i,count=0;
for(i=0;i<9;i++)
{
if(a[i]=='x'||a[i]=='O')
count++;
}
 if(count==9)
 { flag=1;
   printf("\n\n Match draw ...");
 }
 

}
void winresult1()
{
    if(flag==1)
    {
      if(t=='x')
    printf("\n\nPlayer 1st Win.....");
    if(t=='O')
    printf("\n\n smart computer Win.....");
    }
    //if(flag==2)
}
////////////////////////////////////////////////////////////////////////
void main()
{ flag=0;
  t='a'; 
   while(flag!=1)
   { system("cls");
   upperpart();
    printf("\n\nYou are playing with smart computer");
   frame();
   lowerpart();
   usermove();
   wincheck();
   smartmove(move);
   wincheck();
   winresult1();
  }
}












