#include<stdio.h>
int main()
{
int a[3][3],i,j,even,odd;
for(i=0;i<3;i++)
    for(i=0;i<3;i++)
{
    printf("\nenter value of 2d array:");
    scanf("%d",&a[i][j]);
}
printf("\n2D are element are");
for(i=0;i<3;i++)
{
  printf("\n");
  for(i=0;i<3;i++)
    printf("%d\t",a[i][j]);
}
even=odd=0;
 for(i=0;i<3;i++)
 for(i=0;i<3;i++)
{
    if(a[i][j]%2==0)
even++;
    else
    odd++;
    printf("\n total even=%dand total odd =%d",even,odd);
}
return 0;
}
