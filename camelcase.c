#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int l,i;
    scanf("%[^\n]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(i==0)
         str[i]=str[i]-32;
        else if(str[i]==' ') 
         str[i+1]=str[i+1]-32;
                     
    }
    printf("%s",str);
    return 0;
}
