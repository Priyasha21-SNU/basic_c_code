#include<stdio.h>
int main()
{
    int a,*p;
    printf("\nenter number to check for odd or even:");
    scanf("%d",&a);
    p=&a;
    if(*p%2==0)
        printf("\neven number=%d",a);
    else
        printf("\nodd number=%d",a);
    return 0;
}
