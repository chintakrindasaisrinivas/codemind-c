#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        printf("%d x %d = %d
",m,i,m*i);
    }
}