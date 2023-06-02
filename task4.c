#include <stdio.h>
#include <string.h>


void changeDigits(char str[]){
    int lenght = strlen(str);
    for (int i = 0; i < lenght; i++){
        if (str[i] != '9') {
            str[i] = str[i] + 1;
        } else {
            str[i] = '0';
        }
    }
}


int main() {
    char str[100] = "12345";
    changeDigits(str);
    printf("%s", str);
    return 0;
}