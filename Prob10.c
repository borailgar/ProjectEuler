//PROJECT EULER PROBLEM : 10

#include "stdio.h"
#include "math.h"
long long int checkPrime(long long int num){
long long int i;
unsigned long long exc = sqrt(num) + 1;
	if (num%2==0)  return 0;
	
	for (i = 3; i <=exc; i+=2)
	{
	     if(num%i==0) return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	unsigned long long int sum=0;
	unsigned long long int i;
	for (i = 3; i <=10; i+=2)
	{
		if (checkPrime(i))
		{
			sum+=i;
		}
	}

	printf("%llu\n",sum+2);
	return 0;
}