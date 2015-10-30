#include <iostream>
using namespace std;

int main() {
	long long int N;
	cin>>N;
	while(N)
	{
		N++;
		cout<<(N*(3*N-1))/2<<endl;
		cin>>N;
	}
	
	// your code here

	return 0;
}
