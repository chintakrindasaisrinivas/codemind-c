#include<stdio.h>
int main()
{
    int i,m,n,o;
    scanf("%d%d%d",&m,&n,&o);
    for(i=n;i<=o;i++)
    {
        printf("%d x %d = %d
",m,i,m*i);
    }
    
}