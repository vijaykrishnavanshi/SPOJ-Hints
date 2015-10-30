#include <iostream>
using namespace std;

int main() {
	long long int d,n,t,last,first,sum;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		cin>>first>>last>>sum;

			n=2*sum/(last+first);

		
		d = (last-first)/(n-5);
		first=first-2*d;
		cout<<n<<endl;
		for(long long int i=0;i<n;i++)
		{
			cout<<first<<" ";
			first+=d;
		}
		cout<<endl;
	}
	// your code goes here
	return 0;
}
