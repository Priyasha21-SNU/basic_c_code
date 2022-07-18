#include<stdio.h>
int main()
{
    int i,j,a[5][3],even,odd;
    for(i=0;i<5;i++)
    for(j=0;j<3;j++)
    {
        printf("\nenter value of 2D array");
        scanf("%d",&a[i][j]);
    }
    printf("\n2D array elelment are");
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
    }
    even=odd=0;
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
    {
        if(a[i][j]%2==0)
           even++;
           else
            odd++;
    }
    printf("\ntotal even=%d and total no of odd=%d",even,odd);
    return 0;
}
