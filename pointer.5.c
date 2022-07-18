#include<stdio.h>//prime or not
int main()
{
  int n,*p,i,count=0;
  printf("\nenter number to check :");
  scanf("%d",&n);
  p=&n;
  for(i=1;i<=*p;i++)
  {
      if(*p%i==0)
        count++;
  }
  if(*p%2==2)
    printf("prime no");
  else
    printf("not prime:");
  return 0;

}
