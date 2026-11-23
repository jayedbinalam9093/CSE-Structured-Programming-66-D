#include <stdio.h>
int main(){
 char FullName[50];
 char AlphaOnly[50];
 printf("Enter Full Name: ");
 scanf(" %[^\n]", FullName);  
printf("Enter City Name (stops at digits): ");
 scanf(" %[A-Za-z ]", AlphaOnly);
printf("Full Name : %s\n", FullName);
 printf("City Name : %s\n", AlphaOnly);
return 0;
}
