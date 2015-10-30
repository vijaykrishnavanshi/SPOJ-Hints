#include <iostream>
using namespace std;

int main() {
	long long int T,N,M,D,H,count;
	cin>>T;
	for(long long int i=0;i<T;i++)
	{
		count=0;
		cin>>N>>M>>D;
		for(long long int j=0;j<N;j++)
		{
			cin>>H;
			count=count+H/D;
			if(H%D==0)
			{
				count--;
			}
		}
		if(count>=M)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	// your code goes here
	return 0;
}
