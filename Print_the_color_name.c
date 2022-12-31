#include<stdio.h>
int main()
{
    char cs;
    scanf("%c",&cs);
    if(cs=='V')
    printf("Violet");
    else if(cs=='I')
    printf("Indigo");
    else if(cs=='B')
    printf("Blue");
    else if(cs=='G')
    printf("Green");
    else if(cs=='Y')
    printf("Yellow");
    else if(cs=='O')
    printf("Orange");
    else if(cs=='R')
    printf("Red");
    else
    printf("-1");
}