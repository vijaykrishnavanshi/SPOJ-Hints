#include <iostream>
using namespace std;

int main() {
	int N=10,sum=0,j=0;
	int A[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(j=0;j<N;j++)
	{
		sum=sum+A[j];
		if(sum>100)
		break;
	}
	if((100-sum+A[j])>=(sum-100))
	cout<<sum<<endl;
	else
	cout<<sum-A[j]<<endl;
	// your code goes here
	return 0;
}
