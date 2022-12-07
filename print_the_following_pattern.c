#include<stdio.h>
int main()
{
    int i,j,m;
    scanf("%d",&m);
    for(i=m;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
}