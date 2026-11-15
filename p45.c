#include <stdio.h>
int getHighestScore(int score[],int n){
    int max = score[0];
for (int i = 1; i < n; i++) {
 if (score[i] > max) {
   max = score[i];
  }
 }
    return max;
}
  double getClassAverage(int score[],int n){
    int sum = 0;
    for (int i =0; i<n;i++){
        sum+= score[i];
     }
    return (double) sum/n;
  }

int main(){
    int n, score[100];
    scanf("%d",&n); 
    for (int i=0;i<n;i++){
    scanf("%d",&score[i]);
}
    printf("Highest Score = %d\n", getHighestScore(score, n));
    printf("Class Average= %.2lf\n",getClassAverage(score,n));
return 0;
}