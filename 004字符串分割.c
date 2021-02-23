#include <stdio.h>

int main() {
    char str[100];
    char * b[100/8+1];
    int i, j = 0, len = 0;
    
    while(scanf("%s", str) != EOF) {
        len = strlen(str);  //获取字符串长度
        for(i = 0; i < len; i++) {
            if((i + 1)%8 == 0) {
                printf("%c\n", str[i]);
            } else {
                printf("%c", str[i]);
            }
        }
        if(i%8 != 0) {
            int need;
            need = 8 - i%8;
            for(i = 0; i < need; i++) {
                printf("%c", '0');
            }
            printf("\n");
        }
    }
    return 0;
}