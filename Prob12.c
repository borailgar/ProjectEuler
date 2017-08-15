#include "stdio.h"
#include "math.h"

long long int divisor(long long int num){
	long long int result=num*(num+1)/2;

   long long int count=0;
   for (long long int i = 1; i <=sqrt(result); i++)
   {
   	  if (result%i==0)
   	  {
            if (result/i==i)
            {
                 count++;
            }
            else
            	count+=2;
   	  }
   	  
   }
return count;
}
int main(int argc, char const *argv[])
{
    for (long long int i = 1;; ++i)
    {   
    	if (divisor(i)>500)
    	{
    		printf("%lld\n",i*(i+1)/2);
    		break;
    	}
    }


	return 0;
}