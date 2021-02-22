#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    char str[128];
    gets(str);
    int count=0;
    int len=strlen(str);
    for(int i=(len-1);i>=0;i--)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            break;
        }    
    }
    printf("%d\n",count);
    system("pause");
    return 0;
}