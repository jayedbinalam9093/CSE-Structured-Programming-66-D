#include <stdio.h>
int main(){
  char course[]= "CSE-101";
  const char *univarsity= "DUET";
  course[0]= 'E';   
   printf("Updated Course : %s\n", course);
   printf("UNIVARSITY  :%s\n", univarsity); 

    univarsity = "BUET";
   printf("NEW UNIVARSITY: %s\n", univarsity);
return 0;
}