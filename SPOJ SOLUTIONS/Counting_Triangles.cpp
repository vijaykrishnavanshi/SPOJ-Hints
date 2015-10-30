#include <iostream>
using namespace std;

int main() {
	int T;
	long long int n;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		if(n%2==0)
		cout<<(((n*(n+1)*(n+2))/6)+(n*(n+2)*(2*n-1))/24)<<endl;
		else
		cout<<(((n*(n+1)*(n+2))/6)+((n*n-1)*(2*n+3))/24)<<endl;
	}
	// your code goes here
	return 0;
}
