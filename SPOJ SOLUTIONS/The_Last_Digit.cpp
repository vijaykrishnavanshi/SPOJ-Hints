#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int fact[10][4]={	0,0,0,0,   
						1,1,1,1,   
						6,2,4,8,   
						1,3,9,7,  
						6,4,6,4,   
						5,5,5,5,   
						6,6,6,6,   
						1,7,9,3,   
						6,8,4,2,   
						1,9,1,9
					};
	unsigned long long int b;
	int n,a,A[31];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(b!=0)
		A[i]=fact[a%10][b%4];
		else
		A[i]=1;
	
	
	}
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
	// your code goes here
	return 0;
}
