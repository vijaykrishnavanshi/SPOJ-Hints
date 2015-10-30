#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int T,N,M,d,A[20001];
	cin>>T;
	for(long long int i=0;i<T;i++)
	{
		cin>>N>>M;
		for(long long int j=0;j<N;j++)
		{
			cin>>A[j];
		}
		long long int min=1000000099 ;
		sort(A,A+N);
		for(long long int j=0;j+M-1<N;j++)
		{
			d=A[j+M-1]-A[j];
			if(d<min)
			min=d;
		}
		cout<<min<<endl;
	}
	// your code goes here
	return 0;
}
