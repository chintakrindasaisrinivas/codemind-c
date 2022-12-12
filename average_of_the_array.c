#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    float s=0,cs;
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        cs=s/n;
    }
    printf("%0.2f",cs);
}