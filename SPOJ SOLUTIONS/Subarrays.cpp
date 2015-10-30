#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,k;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	cin>>k;
	for(int i=0;i+k<=N;i++)
	{
		cout<<*max_element(A+i,A+i+k)<<" ";
	}
	// your code goes here
	return 0;
}
