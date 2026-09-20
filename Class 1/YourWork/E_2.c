#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a , &b);
    
    if (a - b > 0){
        printf("sub is positive\n");
    }

    else if (a - b == 0){
         printf("sub is zero\n");
    }

    else {

    printf("sub is negetive\n");
    }

    return 0;
}