#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
int height=20, width=50, i,j, flag=0,gameover=0,score;
 int fruitx,fruity,x,y;
  void logic()
    {
  ///  sleep(0.01);
 switch(flag)
 {
    case 1:
        x--;
       break;
    case 2:
        x++;
       break;
    case 3:
        y++;
       break;
    case 4:
        y--;
       break;
        default: break;
  } 
  if(x<0||x>height||y<0||y>width)
  {
     gameover=1;
     printf("\n Game is over \n");
  }
   
     if(x==fruitx && y==fruity)
     {

     label3:
     fruitx=rand()%20;
     if(fruitx==0)
     goto label3;
     label4:
     fruity=rand()%20;
     if(fruity==0)
     goto label4;
     score+=10;
     }
 }

  
 void input()
 {
 if(kbhit())
{
    switch(getch())
    {
        case 'y':
          flag=1;
          break;
        case 'b':
         flag=2;
          break;  
        case 'k':
         flag=3;
          break;  
        case 'f':
         flag=4;
          break;  
          default:
          break;
        }
    }
 }
 void setup()
 {
    
    x=height/2;
    y=width/2;
     label1:
     fruitx=rand()%20;
     if(fruitx==0)
     goto label1;
     label2:
     fruity=rand()%20;
     if(fruity==0)
     goto label2;
     
 }


void draw()
{ 
     system("cls");
    for(i=0;i<height;i++)
    {
         for(j=0;j<width;j++)
         {
           if(i==0||i==height-1||j==0||j==width-1)
           { 
            printf("#");
           }
            else
            {
                if(i==x && j==y)
                printf("O");
                else if(i==fruitx && j==fruity)
                printf("*");
                else
                printf(" ");
            }
         }
         printf("\n");
    }
     printf("\n  %d is the score",score);
}
 int main()
 {  setup();
    while (!gameover)
    {
       draw();
     input();
     logic();
    }
 return 0;
    
 }