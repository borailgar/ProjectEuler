
#include <stdio.h>
#define XMAX 21
#define YMAX 21
int main() {
  long long int matrix[21][21];
  int i,j;
  for(i=0;i<20;i++) {
    matrix[20][i]=1;
    matrix[i][20]=1;
  }
  for(i=0;i<20;i++) 
    for(j=0;j<20;j++)
      matrix[i][j]=matrix[i+1][j]+matrix[i][j+1];
  
  printf("%lld",matrix[20][19]);

  return 0;
}