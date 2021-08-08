#include<stdio.h>

void main()
{
    int a,r,s,n;

    printf("Enter a number");
    scanf("%d",&a);

    while(a!=0)
{
    n=a;
    r=a%10;
    s=s*10+r;
    n=n/10;

}
 if(n==s)
 printf("It is palindrome");
 else
 printf("It is not a paliondrome");
}
