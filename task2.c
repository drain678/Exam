#include <stdio.h>


int sumFoo(int n){
    int sum = 0;
    for (int i = 1; i <=n; i++){
        sum += i * i * i * i;
    }
    return sum;
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sumFoo(n));
    return 0;
}