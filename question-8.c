#include <stdio.h>
int main()
{

     int min,hours;
     printf("Enter minutes:-\n");
     scanf("%d",&min);
     hours=min/60;
     printf("hours-%d\n",hours);
     min=min%60;
     printf("minutes-%d,min");

     return 0;
}