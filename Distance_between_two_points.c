#include<stdio.h>
#include<math.h>
int main()
{
    float ar,a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    ar=sqrt((pow(c-a,2))+(pow(b-d,2)));
    printf("%0.4f",ar);
}