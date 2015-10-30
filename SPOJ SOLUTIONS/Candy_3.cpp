#include <iostream>
using namespace std;


int main() {
	unsigned long long int n,A,sum=0,m;
	
	cin>>n;
	
	for(long long int j=0;j<n;j++)
	{	
		cin>>m;
		sum=0;
		for(long long int i=0;i<m;i++)
		{
			cin>>A;
			sum=((sum+A)%m);
		}
		//cout<<sum;
		
	
		if(!(sum))
		{
			cout<<"YES"<<endl;
		}
		
		else
		{
			cout<<"NO"<<endl;
		
		}
	
	}
	
	return 0;
}





