#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d",&a);
   if(a>=1&&a<=100)
   {
   b=a%2;
   if(b!=0)
   {
       printf("Weird");
   }
   else if(2<a&&a<5)
   {
       printf("Not Weird");
   }
   else if(6<a&&a<20)
   {
     printf(" Weird");  
   }
   else 
   {
      printf("Not Weird");  
   }}
   return 0;
}
