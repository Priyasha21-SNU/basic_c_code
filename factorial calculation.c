#include<stdio.h>
int main()
{
    unsigned int n,i;
    unsigned long r;
printf("\nEnter the number for calculating factorial");
scanf("%u",&n);
r=1;
i=1;
while(i<=n)
{
    r=r*i;
    i=i+1;
}

printf("\n the factorial of %u is %1u",n,r);
return 0;
}
