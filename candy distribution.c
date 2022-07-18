#include<stdio.h>
int main()
{
int N,i,M,C=M^2,R,sum;
printf("\nEnter value of N(bags)");
scanf("%d",&N);
i=1;
sum=0;
 while(i<=N)
 {
 sum=sum+i;
 i=i+1;
 }
 printf("\nsum=%d",sum);
 printf("\nEnter value of M(kids)");
 scanf("%d",&M);
 C=(M*M);
 R=(sum-(M*C));
printf("\nremaining=%d",R);

 return 0;
 }

