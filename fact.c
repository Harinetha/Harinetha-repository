#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int fact=1,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("%d",fact);
    return 0;
}
