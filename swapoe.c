
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int l,i;
    char str[100],temp;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i=i+2)
    {
        temp=str[i];
        str[i]=str[i+1];
        str[i+1]=temp;
    }
    printf("%s",str);
    return 0;
}
