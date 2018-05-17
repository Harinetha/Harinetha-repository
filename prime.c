#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n1,n2,c=0,i,j,flag=0;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            flag=1;
            break;
        }
        if(flag==0)
        c++;
    }
    printf("%d",c);
    return 0;
}
