#include<stdio.h>
int sum(int,int);
void main()
{
    int t,s,p;
    printf("\nenter 1st no:");
    scanf("%d",&t);
    printf("\nenter 2st no:");
    scanf("%d",&s);
    p=sum(t,s);
    printf("\nthe sum is=%d",p);

}
    int sum(int a,int b)
    {
    int c;
    c=a+b;
    return c;
    }

