#include <stdio.h>
int main(){
   float rad;
   float area, vol;
   printf("Enter radius of the sphere : ");
   scanf("%f", &rad);
  
   vol = (4.0/3) * (22/7) * rad * rad * rad;
   printf("Volume of sphere is : %.3f", vol);
   return 0;
}