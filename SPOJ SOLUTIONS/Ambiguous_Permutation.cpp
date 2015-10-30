#include <iostream>
using namespace std;
int A[1000000],B[1000000];
int main() {
	int N;
	while(1)
	{
	
	cin>>N;
	if(N==0)
	break;
	
	
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		B[A[i]-1]=i+1;
	}
	int flag=1;
	for(int j=0;j<N;j++)
	{	//cout<<A[j]<<B[j]<<endl;
		if(A[j]!=B[j])
		flag=0;
	}
	
	if(flag)
	cout<<"ambiguous"<<endl;
	else
	cout<<"not ambiguous"<<endl;
	}
	// your code goes here
	return 0;
}
