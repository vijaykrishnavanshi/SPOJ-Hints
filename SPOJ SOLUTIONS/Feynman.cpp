#include <iostream>
using namespace std;
int n;
int main() {
	
	cin>>n;
	while(n!=0)
	{
		cout<<(n*(n+1)*(2*n+1))/6<<endl;
		cin>>n;
	}
	// your code goes here
	return 0;
}

