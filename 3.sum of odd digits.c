#include <stdio.h>
int main()
{
    int num,sum=0,rem,n;
    printf("\nEnter a positive number");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        rem=num%10;
        if(rem%2==1)
        {
            sum=sum+rem;
        }
        num=num/10;
    }
    printf("Sum of odd digits of %d is %d",n,sum);
    return 0;
}
