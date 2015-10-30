#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int A[300000],sum=0,maxsum=0;
	long long int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int i=0,j=0;i<N;i++)
	{
		sum+=A[i];
		while(sum>M)
		{
			sum-=A[j++];
		}
		maxsum=max(sum,maxsum);
	}
	cout<<maxsum;
	
	// your code goes here
	return 0;
}
