
      printf(" enter the number  ");
       scanf("%d",&num);
       t=num; // to preserve the num value
        while(t!=0)
        { 
            rem=t%10;
            sum=sum+rem*rem*rem;
            t=t/10;  
        }
        if(sum==num)
        printf(" number is a armstrong number");
         else
         printf(" nuber is not a armstrong number");
}