#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int N;
	cin>>N;
	for(long long int i=1;i<=N;i++)
	{
		long long int sum=0,G,k;
		int M;
		cin>>G>>M;
		int A[M];
		for(int j=0;j<M;j++)
		{
			cin>>A[j];
		}
		sort(A,A+M);
		for(int j=M-1;j>=0;j--)
		{
			if(A[j]<=G)
			{
				sum=sum+A[j];
				k++;
				if(sum>=G)
				break;
				
			}
		}
		cout<<"Scenario #"<<i<<":"<<endl;
		if((sum<G)||(k==0)){
			cout<<"impossible"<<endl<<endl;
		}
		else{
			cout<<k<<endl<<endl;
			//cout<<"Hey";
		}
		k=0;
		sum=0;
	}
	// your code goes here
	return 0;
}
