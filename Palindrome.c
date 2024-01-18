#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int s = 0;
    int m =n;
    while(n!=0)
    {
        r = n%10;
        s = (s*10)+r;
        n = n/10;
    }
    if(m==s)
    printf("Palindrome");
    else 
    printf("Not Palindrome");
    return 0;
}