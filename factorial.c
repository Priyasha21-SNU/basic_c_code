 #include<stdio.h>
 int main()
 {
 int i,fac=1;
 printf("\nenter number to find fac:");
 scanf("%d",&i);
 while(i>=1)
 {
 fac=fac*i;
 i=i--;
 }
 printf("\nfactorial=%d",fac);
 return 0;
 }
