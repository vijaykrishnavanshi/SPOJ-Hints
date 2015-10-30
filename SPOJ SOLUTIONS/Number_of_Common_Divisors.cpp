#include <bits/stdc++.h>
using namespace std;
long long int no_fact(long long int n)
{

long long int initial_n = n,i;
long long int num_factors = 1;
i=2;
while( i * i <= initial_n) 
{
    long long int power = 0; 
    while (n % i == 0)
    {
        n = n / i ;
        ++power ;
    }
    num_factors = num_factors * (power + 1);
++i; 
}

if (n > 1) 
{
    num_factors = num_factors * 2 ;
}
return num_factors;
}

int main() {
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int x,y;
		scanf("%lld %lld",&x,&y);
		
		printf("%lld\n",no_fact(std::__gcd(x,y)));
	}
	// your code goes here
	return 0;
}


