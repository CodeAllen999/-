#include <stdio.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF) //没有新的输入
    {
        int a[1000] = {0};
        int b[1001] = {0};
        
        for(int i = 0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        
        for(int i = 0; i<n; i++) {
            b[a[i]]++;
        }
        
        for(int i = 0; i < 1001; i++) {
            if(b[i] != 0) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}