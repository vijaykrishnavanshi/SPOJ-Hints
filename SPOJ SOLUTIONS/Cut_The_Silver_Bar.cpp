#include <iostream>
using namespace std;

int main() {
	long long int N,c=0;
	cin>>N;
	while(N!=0)
	{ 
		c=0;
		long long int cuts=0;
		while(N>c)
		{
			c=c*2+1;
			cuts++;
		}
		cout<<cuts-1<<endl;
		cin>>N;
	}
	// your code goes here
	return 0;
}
