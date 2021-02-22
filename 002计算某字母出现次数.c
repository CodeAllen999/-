#include <stdio.h>
#include <string.h>

int main() {
    int len;
    int count = 0;
    char str[500];
    char letter;

    gets(str);
    scanf("%c", &letter); //输入函数，这里字符使用%c
    
    len = strlen(str); //使用字符函数获取长度
    for(int i = 0; i < len; i++) { //这里可以使用tolower都转成小写再比较
        if((str[i] == letter) || (str[i] == letter + 32) || (str[i] == letter - 32)) { //大写字母的ASCII值和小写字母的ASKII值的差是-32
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}
