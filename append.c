
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,l;
    char str[100];
    scanf("%s",str);
    l=strlen(str);
    str[l]='.';
    printf("%s",str);
    return 0;
}
