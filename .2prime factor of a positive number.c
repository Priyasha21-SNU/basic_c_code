
#include<stdio.h>
int main()
{
    int i,j,f=0,num;
    printf("\nenter a positive integer");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                printf("%d\t",i);
            }
        }
    }
    return 0;
}
