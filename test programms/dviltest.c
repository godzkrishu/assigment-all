#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
 char a[9]={'0','1','2','3','4','5','6','7','8'};
  int flag, count, move, k;
   char l ;
  // void menu();
   void frame();
 //  void choice();
   void user1move();
    void upperpart();
    void lowerpart();
    void devilmove(int);
    void wincheck();
    void user2move();
 void cheatcheck();////////use in devil/////////////

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
void user1move()
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
 void devilmove( int n)
   {  
    int x;
    switch (n)
 {
    case 0: /////////////
 label0:
srand(time(NULL));
x=rand()%9;
if(x!=0&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label0;
 
break;
case 1:////////////////
  label1:
srand(time(NULL));
x=rand()%9;
if(x!=1&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label1;
 
break;
case 2:////////////////
label2:
srand(time(NULL));
x=rand()%9;
if(x!=2&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label2;
 
break;
case 3:////////////////
label3:
srand(time(NULL));
x=rand()%9;
if(x!=3&&a[x]!='O'&&a[x]!='x')
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
if(x!=5&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label5;
 
break;
case 6:////////////////
label6:
srand(time(NULL));
x=rand()%9;
if(x!=6&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label6;
 
break;
case 7:////////////////
label7:
srand(time(NULL));
x=rand()%9;
if(x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label7;
 
break;
case 8:////////////////
label8:
srand(time(NULL));
x=rand()%9;
if(x!=8&&a[x]!='O'&&a[x]!='x')
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
 l=a[0];
flag=1;
}
if(a[0]==a[3]&&a[3]==a[6])
{
 l=a[0];
flag=1;
}
if(a[2]==a[5]&&a[5]==a[8])
{
 l=a[2];
flag=1;
}
if(a[6]==a[7]&&a[7]==a[8])
{
 l=a[6];
flag=1;
}
if(a[1]==a[4]&&a[4]==a[7])
{
 l=a[1];
flag=1;
}
if(a[3]==a[4]&&a[4]==a[5])
{
 l=a[3];
flag=1;
}
if(a[0]==a[4]&&a[4]==a[5])
{
 l=a[0];
flag=1;
}
if(a[6]==a[4]&&a[4]==a[2])
{
 l=a[6];
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

//////////////////////////////////////////////////////////////////////// 


//////////////////////from here devil
  void cheatcheck()
    { int w=-1,p=0;
     int b[4]={0};
      if(a[0]=='x'&&a[1]=='x')
      {
       w++;
       b[w]=2; 
      }
      if(a[0]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=8; 
      }
      if(a[0]=='x'&&a[3]=='x')
      {
       w++;
       b[w]=6; 
      }
      if(a[2]=='x'&&a[1]=='x')
      {
       w++;
       b[w]=0; 
      }
      
      
      if(a[2]=='x'&&a[0]=='x')
      {
       w++;
       b[w]=1; 
      }
      if(a[0]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=4; 
      }
      if(a[6]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=7; 
      }
      if(a[6]=='x'&&a[2]=='x')
      {
       w++;
       b[w]=4; 
      }
      if(a[0]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=3; 
      }
      if(a[2]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=5; 
      }

      if(a[2]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=6; 
      }
      if(a[2]=='x'&&a[5]=='x')
      {
       w++;
       b[w]=8; 
      }
      if(a[3]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=0; 
      }
      if(a[4]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=2; 
      }
      if(a[7]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=8; 
      }
      if(a[5]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=2; 
      }
      if(a[8]=='x'&&a[7]=='x')
      {
       w++;
       b[w]=6; 
      }
      if(a[8]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=0; 
      }
      if(a[4]=='x'&&a[1]=='x')
      {
       w++;
       b[w]=7; 
      }
      if(a[7]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=1; 
      }
      if(a[3]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=5; 
      }
      if(a[4]=='x'&&a[5]=='x')
      {
       w++;
       b[w]=3; 
      }
       if(w>=0)
       { int i,u=0;
        for(i=0;i<=w;i++)
        {   if(a[b[i]]!='O'&&a[b[i]]!='x')
             { 
                a[b[i]]='O';
                u++;
                p--;
                if(u==2)
                break;
             
             }
             else 
             p++;
        }
       }
        if(w==-1||p>0)
        {
           devilmove(move);
        }

    }
////////////////////////////////////////////////////////
void devilresult()
{
     //if(flag==1)
        // {
           if(l=='x')
           { system("cls");
            upperpart();
            frame();
            lowerpart();
         printf("\n\nPlayer 1st Win.....");
         flag=1;
           }
         if(l=='O')
         { system("cls");
            upperpart();
            frame();
            lowerpart();
          printf("\n\n smart computer Win.....");
          flag=1;
          }
         
         //}
}
/////////////////////////
 void main()
 {
 
  
         while(flag!=1)
      { flag=0;
           system("cls");
        upperpart();
         printf("\n\nYou are playing with Devil computer");
        frame();
        lowerpart();
        user1move();
        wincheck();
        cheatcheck();
       wincheck();
      devilresult();
      }
 }