#include <stdio.h>
#include <stdlib.h>

unsigned long long int anyDivide(unsigned long long int num){
num*=(num+1);
num/=2;
return num;

}

 void sumOfDivider(unsigned long long int num){
unsigned long long int sum=0;
    for(int i=1;i<=20;i++){
         if(num%i==0)
           //sum+=i;
          printf("%d ",i);
    }
//return sum;
}

int main()
{
/**for(unsigned long long int i=2520;;i++){
    if(anyDivide(20)==sumOfDivider(i)){
       printf("%d ",i);
    break;

    }


  }*/
sumOfDivider(232792560);
//printf("%d ",anyDivide(10));

    return 0;
}
















