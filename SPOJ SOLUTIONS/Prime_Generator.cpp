#include <iostream>
#include <cmath>
using namespace std;
int isprime(long long int N)
{	int check=0;
	for(long long int i=2,lim=sqrt(N);i<=lim;i++)
	{
		if(N%i==0)
		return 1;
	}
	return check;
}
	
int main() {
	long long int N,start,end;
	scanf("%lld",&N);
	for(long long int i=0;i<N;i++)
	{
		scanf("%lld %lld",&start,&end);
		for(long long int i=start,check=1;i<=end;i++)
		{
			
			if(((i%2!=0)||(i%3!=0)||(i%5!=0)||(i%7!=0)||(i%11!=0)||(i%13!=0)||(i%17!=0)||(i%19!=0)||i<=19) && i!=1)
			{
				check=isprime(i);
			}
			if(check!=1)
			{
				printf("%lld\n",i);
			}
			
		}
		printf("\n");
	}

	// your code goes here
	return 0;
}

