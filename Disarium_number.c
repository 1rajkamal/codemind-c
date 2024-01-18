#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,q=0,k;
    scanf("%d",&n);
    int a=n;
    int b = n;
    while(n!=0)
    {
        int r = n%10;
        ++s;
        n = n/10;
    }
    while(a!=0)
    {
        k = a%10;
        q = q+pow(k,s);
        a=a/10;
        --s;
    }
  if(q==b)
  printf("True");
  else
  printf("False");
}