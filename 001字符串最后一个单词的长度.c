#include<stdio.h>
#include<string.h>

int main()
{
    char str[128];
    gets(str);    //从屏幕获取字符串
    int count=0;
    int len=strlen(str);  //使用stelen函数获取长度

    for(int i=(len-1);i>=0;i--)  //注意loop循环只在c99之后的标准支持,另外数组是从0开始
    {
        if(str[i]!=' ')
        {
            count++;   //没有发现空格之前统计字符串长度
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
