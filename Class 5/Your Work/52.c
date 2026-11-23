#include<stdio.h>
#include<string.h>

int main(){
    char topscorer[30]="Nusrat Jahan Hamim";
    char runnerup[30]="Tanvir Hossain";
    char temp[30];
    printf("Before Swap -> 1st: %s | 2nd: %s\n", topscorer, runnerup);

    strcpy(temp, topscorer);
    strcpy(topscorer, runnerup);
    strcpy(runnerup, temp);

    printf("After Swap  -> 1st: %s | 2nd: %s\n", topscorer, runnerup);

    return 0;
}
