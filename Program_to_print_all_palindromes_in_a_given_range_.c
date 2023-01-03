#include<stdio.h>
int main()
{     
    int i,n,m,r,rev,a;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        rev=0;
        a=i;
        while(a>0)
      {
            r=a%10;
            rev=rev*10+r;
            a=a/10;
        }
        if(rev==i)
        {
            printf("%d ",rev);
        }
    }
}