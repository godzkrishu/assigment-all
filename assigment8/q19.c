#include<stdio.h>
 void main()
 {
    int i,j;
     for(i=1;i<=5;i++) // for left upper triangle
     { 
         for(j=1;j<=5-i;j++) //space  in left for left upper triangle
        {
      printf(" ");
        }
        for(j=1;j<=i;j++)
        { 
           if(i==1||i==2)
           printf(" ");
            else
           printf("*");
        }
        for(j=1;j<i;j++)
        { if(i==1||i==2)
           printf(" ");
           else
           printf("*");
        }
         for(j=1;j<=5-i;j++) /// space  in right for left upper triangle
        {
       printf(" ");
        }
        //////////////////////////////////////////
        printf(" ");
         /////////right upper triangle////////////

         for(j=1;j<=5-i;j++) //space  in left for right upper triangle
        {
       printf(" ");
        }
        
        for(j=1;j<=i;j++)
        { 
           if(i==1||i==2)
           printf(" ");
            else
           printf("*");
        }
        for(j=1;j<i;j++)
        { if(i==1||i==2)
           printf(" ");
           else
           printf("*");
        }
        
        printf("\n");
     }
     /////// lower triangle/////
      char a[7]="KRISHNA";
     for(i=0;i<19;i++)
     {
         for(j=0;j<i;j++)
         {
            printf(" ");
         }
         for(j=0;j<19-2*i;j++)
         { 
            if(j>=6&&j<=12&&i==0)
            printf("%c",a[j-6]);
            
            else
            printf("*");
         }
         printf("\n");

     }
    
        
}
 