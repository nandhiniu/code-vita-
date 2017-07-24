#include <stdio.h>

int main()
{
    int T1,T2,m,a;
    scanf("%d %d %d",&T1,&T2,&m);
    a=(T1+T2)/m;
    if(isalpha(m))
    {
        printf("invalid Input");
    }
     
      else if(a>T1&&a<T2)
      {
       
           
            printf("%d \n",a);
        }
        else
        {
            printf("no number is present this index");
        }
    return 0;
}
