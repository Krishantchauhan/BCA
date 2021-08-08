 #include<stdio.h>
int fib(int n);
int main()
{
  int n=9,i=0,c;
for(c=1;c<=n;c++)
{
   printf("%d\t",fib(i));
i++;
 }
return 0;
}

int fib(int n)
{
  if (n==0)
  {
    return 0;}
    else if (n==1)
    {
      return 1;
    }
    else return fib(n-2)+fib(n-1);
}
