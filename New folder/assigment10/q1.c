#include<stdio.h>
float Ar( float r);
  int main()
  {
     float r, area;
      printf(" enter the radius of the circle=");
       scanf("%f",&r);
        area=Ar(r);
         printf(" area of the circle is %f",area);
          return 0;
  }
   float Ar( float r)
   {
         return 3.14*r*r;
   }