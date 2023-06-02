#include <stdio.h>


int main(){
    int n, m, i = 0;
    scanf("%d", &m);
    if (m == 0) {
        printf("%d", 0);
        return 0;
    }
    scanf("%d", &n);
    if (n == 0) {
        printf("%d", 0);
        return 0;
    }
    while ( n != 0 ){ 
        if (m * 2 == n) {
            i++;
        }
        m = n;
        scanf("%d", &n);
    }
    printf("%d", i);
    return 0;
}