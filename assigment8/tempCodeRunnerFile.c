for(i=1;i<=5;i++) // for upper triangle
     { 
         for(j=1;j<=5-i;j++)
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