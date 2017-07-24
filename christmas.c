 #include <stdio.h>
void branch();
void part();
void stand();
int n,i,j,x,k,p,m;
int main(void) {

    scanf("%d",&n);
    if(n<=1)
    {
        printf("you canot generate christmas tree");
    }
    else if(n>20)
    {
        printf("tree is no more");
    
    }
    else
    {
    branch();
    part();
    stand();
    return 0;
}}
    void branch()
    {
    x=n+1;
       for(i=1; i<=x; i++, k=0)
   {
       for(j=1; j<=x-i; j++)
       {
           printf("  ");
       }

       while(k != 2*i-1)
       {
           printf("* ");
           k++;
       }

       printf("\n");  
      
   }
}
void part()
{
   for(p=n-1;p>1;p--)
   {
   for(i=2; i<=p+1; ++i, k=0)
   {
       for(j=1; j<n+2-i;++j)
       {
           printf("  ");
       }

       while(k != 2*i-1)
       {
           printf("* ");
           ++k;
       }

       printf("\n");  
      
   }
   }
}
void stand()
{
    for( i=0;i<2;i++)
     {
         for(int m=0;m<(n*2);m++)
         {
             printf("%c",' ');
         }
         printf("%c\n",'*');
     }
}
