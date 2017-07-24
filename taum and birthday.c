#include <stdio.h>
int main()
{
 int b,w,x,y,z,i,j,k,T,n;
 scanf("%d\n",&T);
 if(T>=1&&T<=10)
 {
for(n=1;n<=T;n++)
 {
     scanf("%d%d%d%d%d",&b,&w,&x,&y,&z);
 i=b*x+w*y;
 j=b*z+w*y+b*y;
 k=b*x+w*z+w*x;
 if(i<j&&i<k)
 {
     printf("%d \n",i);
     
 }
 else if(j<k)
 {
     printf("%d \n",j);
 }
 else
 {
     printf("%d \n",k);
 }
  
 }
}
     return 0; 
}
