#include <bits/stdc++.h>
using namespace std;
//bool B[500005];
int main() {
	map <long long int,long long int> m;
	long long int A[500001]={0};
	m[0]=1;
	A[1]=m[1]=1;
	for(int i=2;i<500001;i++)
	{
		if((A[i-1]-i>0)&&(m[A[i-1]-i]!=1))
		{
			A[i]=A[i-1]-i;
			m[A[i]]=1;
		}
		else
		{
			A[i]=A[i-1]+i;
			m[A[i]]=1;
		}
	//	cout<<A[i]<<endl;
	}
	long long int T;
	cin>>T;
	
	while(T!=-1)
	{
		cout<<A[T]<<endl;;
		cin>>T;
	}
	// your code goes here
	return 0;
}
