#include <stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("%c is an Uppercase Alphabet\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("%c is a Lowercase Alphabet\n", ch);
    }
        else if (ch >= '0' && ch <= '9'){
            printf("%c is a digit");
        }
        return 0;
    }
