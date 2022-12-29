#include<stdio.h>
int main()
{
    int b,c;
    scanf("%d%d",&b,&c);
    float a;
    a=(b+c)*0.5;
    printf("Average of %d and %d is: %0.2f",a,b,c);
}