#include<stdio.h>
void main()
{
    int a,b,s,p,d,choice;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("1 sum\n");
    printf("2 pro\n");
    printf("3 diff\n");
    printf("enter choice\n");
    scanf("%d",&choice);
      switch(choice)
    {
    case 1:
        s=a+b;
        printf("sum=%d\n",s);
        break;
    case 2:
        p=a*b;
        printf("product=%d\n",p);
        break;
    case 3:
        d=a-b;
        printf("difference=%d\n",d);
        break;
    defult:
        printf("wrong choice%d\n");
    }

}
