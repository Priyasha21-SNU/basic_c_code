#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("\nenter the string:");
    get(a);
    b_strrev(a);
    if(strcmpi(a,b)=0)
        printf("\npalindrom function:");
    else
        printf("\nnot a palindrom function:");
    return 0;
}
