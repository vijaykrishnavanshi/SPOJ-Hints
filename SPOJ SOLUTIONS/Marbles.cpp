#include <bits/stdc++.h>
using namespace std;

long long combi(int n,int k)
{
    long long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}
int main() {
	int N,K,T;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>K>>T;
		cout<<combi(K-1,T-1)<<endl;
	}
	// your code goes here
	return 0;
}
