#include<stdio.h>
int main()
{
int a[3][3],i,j; //i=row,j=column
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("\nenter value of 2D array:");
scanf("%d",&a[i][j]);
}
printf("\n2D array elements are:");
for(j=0;i<3;j++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
}
return 0;
}
