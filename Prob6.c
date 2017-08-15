#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumOfNumbers(int num){
num*=(num+1);
return num/2;
}

int sumSquareNum(int num){
int sum=0;
for(int i=1;i<=100;i++){
    sum+=pow(i,2);

}
return sum;
}
int main()
{
    int square=pow(sumOfNumbers(100),2);
    printf("%d ",square - sumSquareNum(100));
    return 0;
}
