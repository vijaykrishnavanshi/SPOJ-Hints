#include <iostream>
using namespace std;

int main() {
	long long int A[41];
	A[1]=2;
	for(int i=2;i<41;i++)
	{
		A[i]=A[i-1]*3+2;
	}
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int T;
		cin>>T;
		cout<<A[T]<<endl;
	}
	// your code goes here
	return 0;
}
