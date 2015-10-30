#include <iostream>
using namespace std;

int main() {
	unsigned long long int N;
	cin>>N;
	unsigned long long int K;
	for(unsigned long long int i=0;i<N;i++)
	{
		cin>>K;
		cout<<(K-1)*250+192<<endl;
	}
	// your code goes here
	return 0;
}
