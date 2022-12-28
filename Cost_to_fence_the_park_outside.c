#include<stdio.h>
int main()
{
    int l,b,d,a,c,oa,ia;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    ia=(l*b);
    oa=((l+(2*d))*(b+(2*d)));
    a=oa-ia;
    int z;
    z=a*c;
    printf("%d",z);
}