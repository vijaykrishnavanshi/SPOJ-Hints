#include <bits/stdc++.h>
using namespace std;

int main() {
	int T=1;
	while(T)
	{
	int N,M,temp1=0,temp2=0,sum=0,x;
	int A[20002]={0},B[20002]={0};
	cin>>N;
	if(N==0)
	{
		break;
	}
	for(int i=0;i<N;i++)
	{
		cin>>x;
		A[x+10000]=1;
	}
	cin>>M;
	for(int i=0;i<M;i++)
	{
		cin>>x;
		B[x+10000]=1;
	}
	for(int i=0;i<20001;i++)
	{
		if(A[i]!=0)
		{
			temp1=temp1+i-10000;
		}
		if(B[i]!=0)
		{
			temp2=temp2+i-10000;
		}
		if(((A[i]==1)&&(B[i]==1)))
		{
			if(temp1>temp2)
			{
				sum+=temp1;
			}
			else
			{
				sum+=temp2;
			}
			temp1=temp2=0;
		}
		
		
	}
	cout<<sum+max(temp1,temp2)<<endl;
	}
	// your code goes here
	return 0;
}
