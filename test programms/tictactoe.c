#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
 char a[9]={'0','1','2','3','4','5','6','7','8'};
  int flag;
   int  move, k;
  void usermove();
   void smartcomputer();
    void upperpart();
    void smartmove(int);
    //void wincheck();
void menu()
{  
    printf("\tEnter your choice");
    printf("\n1. Want to play with smart computer");
    printf("\n2. Want to play with  evil computer");
    printf("\n3. Want to play with your friend\n");

}
void choice()
{
    switch (getch())
    {
    case '1':
    k=1;
        break;
    case'2' :
    k=2;
    printf("\n\nYou are playing with evil computer");
     upperpart();
    //evilcomputer();
        break;
    case '3':
    k=3;
    printf("\n\nYou are playing with Your friend");
    upperpart();
    //friend();
        break;
    
    default:
        break;
    }
}

void upperpart()
{
    printf("\n\n##################### Tic Tac Toe ##################### ");
     printf("\n\t Player 1 = x");
     printf("\n\t Player 2 = O");
}
 void lowerpart()
 {
     printf("\n\n###################################################### ");
     
     if (flag==1)
        printf("\n\n Player 1 Win..");
     else if(flag==2)
        printf("\n\n Player 2 Win..");
     else if(flag==3)
        printf("\n\n Game Over..");
     
     printf("\n\n########################################################################## ");
 }
void frame()
{
    
     printf("\n\n\t \t %c | %c | %c ",a[0],a[1],a[2]);
     printf("\n\t\t---|---|---");
     printf("\n\t \t %c | %c | %c ",a[3],a[4],a[5]);
     printf("\n\t\t---|---|---");
     printf("\n\t \t %c | %c | %c ",a[6],a[7],a[8]);

}
 /*void smartcomputer()
 {  
   while(flag!=1||flag!=2||flag!=3) 
    { system("cls");
        frame();
        usermove();
       smartmove(move);
   //wincheck();
    }

 }*/
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
    smartmove(move);
   }
void smartmove( int m)

{ int x;
    switch (m)
{
/////////////////////////////////////////////////////////////
case 0:
label10:
srand(time(NULL));
x=rand()%5;
if(x==1||x==3||x==4)
{
     if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label10;
}
break;
/////////////////////////////////////////////////////////////
case 1:
label11:
srand(time(NULL));
x=rand()%5;
if(x==0||x==2||x==4)
{
    if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label11;
      
}
break;
/////////////////////////////////////////////////////////////
case 2:
label12:
srand(time(NULL));
x=rand()%6;
if(x==1||x==4||x==5)
{
     if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label12;
     
}
break;
/////////////////////////////////////////////////////////////
case 3:
label13:
srand(time(NULL));
x=rand()%7;
if(x==0||x==4||x==6)
{
    if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label13;
     
}
break;
/////////////////////////////////////////////////////////////
case 4:
//label14:
while(1)
{
srand(time(NULL));
x=rand()%9;
if(x!=4)
{
   if(a[x]!='O'&&a[x]!='x')
    {
        a[x]='O'; 
        break;
    }
    // else 
     //goto label14;
}
}
break;
/////////////////////////////////////////////////////////////
case 5:
label15:
srand(time(NULL));
x=rand()%9;
if(x==2||x==4||x==8)
{
     if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label15;
}
break;
/////////////////////////////////////////////////////////////
case 6:
label16:
srand(time(NULL));
x=rand()%8;
if(x==3||x==4||x==7)
{
     if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label16;
     
}
break;
/////////////////////////////////////////////////////////////
case 7:
label17:
srand(time(NULL));
x=rand()%9;
if(x==4||x==6||x==8)
{
    if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label17;
     
}
break;
/////////////////////////////////////////////////////////////
case 8:
label18:
srand(time(NULL));
x=rand()%8;
if(x==4||x==5||x==7)
{
    if(a[x]!='O'&&a[x]!='x')
     a[x]='O'; 
     else 
     goto label18;
     
}
break;
/////////////////////////////////////////////////////////////
}

}





int main()
{
     menu();
     choice();
     if(k==1)
     { while(flag!=1||flag!=2)
      {
         system("cls");
      upperpart();
    printf("\n\nYou are playing with smart computer");
    frame();
    usermove();
    lowerpart();
     }
     } 
     //while(flag==1||flag==2||flag==3){ frame();}
return 0;
}