#include <stdio.h>

int main(){
    int mark;
    
    scanf("%d", &mark);
    if (!(mark >=0 && mark <=100)){

        printf("invalid marks entered !/n");
    }
    else if (mark >=40)
    {
        printf("passed/n");
    }
    else {
        printf("failed/n");
    }
    return 0;
    
}

