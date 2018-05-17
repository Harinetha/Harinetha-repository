
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    return 0;
}
