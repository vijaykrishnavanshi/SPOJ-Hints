#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N,sum=0,M,men[1000],women[1000];
	cin>>N;
	for(int i=0;i<N;i++)
	{
		sum=0;
		cin>>M;
		for(int k=0;k<M;k++)
		{
			cin>>men[k];
		}
		for(int j=0;j<M;j++)
		{
			cin>>women[j];
		}
		sort(men,men+M);
		sort(women,women+M);
		for(int l=M-1;l>=0;l--)
		{
			
			sum=sum+(men[l]*women[l]);
			
		}
		cout<<sum<<endl;
	}
	// your code goes here
	return 0;
}

