
#include<stdio.h>
int main()
{
int n,i;
long long int fact=1;
scanf("%d",&n);
if(n>=0)
{
for(i=1;i<=n;i++)
fact=fact*i;
printf("%lld",fact);
}
}
