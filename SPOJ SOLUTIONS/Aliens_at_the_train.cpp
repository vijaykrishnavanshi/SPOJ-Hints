#include <bits/stdc++.h>
using namespace std;
main() {
	int T;
	cin>>T;
	while(T--)
	{
	long long int A[300000];
	long long int N,M;
	scanf("%lld %lld",&N,&M);
	for(int i=0;i<N;i++)
	{
		scanf("%lld",&A[i]);
	}
	long long int sum = 0;
	long long int max_sum = 0;
	int size = 0;
	int max_size = 0;
	int x = 0;
	for (int i = 0 ; i < N ; i++ ) {
	if ( sum + A[i] <= M ) {
	sum += A[i];
	size += 1;
	}
	else {
	while ( sum + A[i] > M ) {
	sum -= A[x];
	size -= 1;
	x++;
	}
	sum += A[i];
	size += 1;
	}
	if ( (size > max_size) || ( max_size == size && max_sum > sum ) ) {
	max_sum = sum;
	max_size = size;
	}
	}
	printf("%lld %d\n" , max_sum , max_size);
	}
	// your code goes here
	return 0;
}
