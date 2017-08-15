#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int main()
{
int temp=0;
for(int i=0;i<MAX_SIZE;i++)
  {
  if(i%3==0 || i%5==0)
temp+=i; }
printf("%d",temp);
    return 0;
}
