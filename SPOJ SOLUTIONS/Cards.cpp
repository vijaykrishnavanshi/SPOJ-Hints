#include <iostream>
using namespace std;

int main() {
		unsigned long long int N,A;
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>A;
			cout<<((A*(4+((A-1)*3)))/2)%1000007<<endl;
		}
	// your code goes here
	return 0;
}

